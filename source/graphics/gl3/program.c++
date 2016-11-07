/*
 * Copyright (C) 2016  hedede <haddayn@gmail.com>
 *
 * License LGPLv3 or later:
 * GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
 * This is free software: you are free to change and redistribute it.
 * There is NO WARRANTY, to the extent permitted by law.
 */
#include <aw/graphics/gl/program.h>
#include <aw/graphics/gl/shader.h>
#include <aw/graphics/gl/gl_ext33.h>
#include <aw/utility/on_scope_exit.h>
#include <iostream> // temporary


namespace aw::gl3 {

struct shader_handle {
	GLuint value;
	operator GLuint() { return value; }
};

namespace {
void report_program_info_log(GLuint _program)
{
	GLint length;
	gl::get_programiv( _program, GL_INFO_LOG_LENGTH, &length );

	std::vector<char> log(length + 1);
	gl::get_program_info_log( _program, log.size(), nullptr, log.data() );

	std::cerr << string_view{log.data(), log.size()} << '\n';
}
} // namespace

program::program()
{
	_program = gl::create_program();
}

void program::cleanup()
{
	gl::delete_program(_program);
	_program = 0;
}

bool program::is_linked() const
{
	if (!_program) return false;

	GLint status;
	gl::get_programiv(_program, GL_LINK_STATUS, &status);

	return status == GL_TRUE;
}

bool program::link(std::vector<shader>& shaders)
{
	for ( auto& shader : shaders )
		gl::attach_shader( _program, handle(shader) );

	gl::link_program( _program );

	bool status = is_linked();
	if ( status == false ) {
		std::cerr << "Failed to link program: " << '\n';
		report_program_info_log( _program );
	}

	for ( auto& shader : shaders )
		gl::detach_shader( _program, handle(shader) );

	return status;
}

uniform_location program::uniform( char const* name )
{
	return uniform_location( gl::get_uniform_location( _program, name ) );
}

void uniform_proxy::set(GLfloat x)
{
	gl::uniform1f( GLint(location), x);
}

void uniform_proxy::set(GLfloat x, GLfloat y)
{
	gl::uniform2f( GLint(location), x, y);
}

void uniform_proxy::set(GLfloat x, GLfloat y, GLfloat z)
{
	gl::uniform3f( GLint(location), x, y, z);
}

void uniform_proxy::set(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	gl::uniform4f( GLint(location), x, y, z, w);
}

struct program_handle {
	GLuint value;
	operator GLuint() { return value; }
};
struct program_handle handle(program& prg) { return {prg._program}; }

} // namespace aw::gl3
