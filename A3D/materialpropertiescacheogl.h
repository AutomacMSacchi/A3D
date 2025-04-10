#ifndef A3DMATERIALPROPERTIESCACHEOGL_H
#define A3DMATERIALPROPERTIESCACHEOGL_H

#include "A3D/common.h"
#include "A3D/materialproperties.h"
#include "A3D/materialpropertiescache.h"
#include <QOpenGLBuffer>

namespace A3D {

class RendererOGL;
class MaterialCacheOGL;
class MaterialPropertiesCacheOGL : public MaterialPropertiesCache {
	Q_OBJECT
public:
	explicit MaterialPropertiesCacheOGL(MaterialProperties*);
	~MaterialPropertiesCacheOGL();

	void update(RendererOGL*, CoreGLFunctions*);
	void install(CoreGLFunctions*, MaterialCacheOGL*);

private:
	struct MaterialUBO_Data {
		QVector4D placeholder;
	} m_materialUBO_data;

	GLuint m_materialUBO;
};

}

#endif // A3DMATERIALPROPERTIESCACHEOGL_H
