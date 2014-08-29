#ifndef _hrengin_CRenderingDevice_
#define _hrengin_CRenderingDevice_

#include <hrengin/graphics/IRenderingDevice.h>

namespace irr {
class IrrlichtDevice;

namespace video {

class IVideoDriver;

} // namespace video
} // namespace irr

namespace hrengin {
namespace graphics {

class CRenderingDevice : public IRenderingDevice {
public:
	virtual bool drawVertexPrimitive(const IVertexBuffer& vb, const IIndexBuffer& ib);
	virtual void drawLine(const Vector3d& from, const Vector3d& to, const Vector3d& color);

	virtual bool beginRender();
	virtual bool endRender();
private:
	irr::video::IVideoDriver* driver;
};

	
} // namespace video
} // namespace hrengin

#endif//_hrengin_CRenderingDevice_