/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSSVGMatrix_h
#define JSSVGMatrix_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "SVGAnimatedPropertyTearOff.h"
#include "SVGElement.h"
#include "SVGMatrix.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSSVGMatrix : public JSDOMWrapper {
    typedef JSDOMWrapper Base;
public:
    JSSVGMatrix(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGPropertyTearOff<SVGMatrix> >);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    SVGPropertyTearOff<SVGMatrix> * impl() const { return m_impl.get(); }

private:
    RefPtr<SVGPropertyTearOff<SVGMatrix> > m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, SVGPropertyTearOff<SVGMatrix> *);
SVGPropertyTearOff<SVGMatrix> * toSVGMatrix(JSC::JSValue);

class JSSVGMatrixPrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
    JSSVGMatrixPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure) : JSC::JSObjectWithGlobalObject(globalData, globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionMultiply(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionInverse(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionTranslate(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionScale(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionScaleNonUniform(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionRotate(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionRotateFromVector(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionFlipX(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionFlipY(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionSkewX(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGMatrixPrototypeFunctionSkewY(JSC::ExecState*);
// Attributes

JSC::JSValue jsSVGMatrixA(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGMatrixA(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGMatrixB(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGMatrixB(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGMatrixC(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGMatrixC(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGMatrixD(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGMatrixD(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGMatrixE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGMatrixE(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGMatrixF(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGMatrixF(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGMatrixConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
