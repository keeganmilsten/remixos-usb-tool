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

#include "config.h"


#if ENABLE(SVG)

#include "SVGElement.h"
#include "JSSVGAnimatedNumberList.h"

#include <wtf/GetPtr.h>

#include "JSSVGNumberList.h"
#include "SVGNumberList.h"


using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimatedNumberList)

/* Hash table */

static const HashTableValue JSSVGAnimatedNumberListTableValues[3] =
{
    { "baseVal", DontDelete|ReadOnly, (intptr_t)jsSVGAnimatedNumberListBaseVal, (intptr_t)0 },
    { "animVal", DontDelete|ReadOnly, (intptr_t)jsSVGAnimatedNumberListAnimVal, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGAnimatedNumberListTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 1, JSSVGAnimatedNumberListTableValues, 0 };
#else
    { 4, 3, JSSVGAnimatedNumberListTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGAnimatedNumberListPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGAnimatedNumberListPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGAnimatedNumberListPrototypeTableValues, 0 };
#else
    { 1, 0, JSSVGAnimatedNumberListPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGAnimatedNumberListPrototype::s_info = { "SVGAnimatedNumberListPrototype", 0, &JSSVGAnimatedNumberListPrototypeTable, 0 };

JSObject* JSSVGAnimatedNumberListPrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSSVGAnimatedNumberList>(exec);
}

const ClassInfo JSSVGAnimatedNumberList::s_info = { "SVGAnimatedNumberList", 0, &JSSVGAnimatedNumberListTable, 0 };

JSSVGAnimatedNumberList::JSSVGAnimatedNumberList(PassRefPtr<Structure> structure, PassRefPtr<SVGAnimatedNumberList> impl, SVGElement* context)
    : DOMObject(structure)
    , m_context(context)
    , m_impl(impl)
{
}

JSSVGAnimatedNumberList::~JSSVGAnimatedNumberList()
{
    forgetDOMObject(*Heap::heap(this)->globalData(), m_impl.get());

}

JSObject* JSSVGAnimatedNumberList::createPrototype(ExecState* exec)
{
    return new (exec) JSSVGAnimatedNumberListPrototype(JSSVGAnimatedNumberListPrototype::createStructure(exec->lexicalGlobalObject()->objectPrototype()));
}

bool JSSVGAnimatedNumberList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedNumberList, Base>(exec, &JSSVGAnimatedNumberListTable, this, propertyName, slot);
}

JSValuePtr jsSVGAnimatedNumberListBaseVal(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGAnimatedNumberList* imp = static_cast<SVGAnimatedNumberList*>(static_cast<JSSVGAnimatedNumberList*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->baseVal()), static_cast<JSSVGAnimatedNumberList*>(asObject(slot.slotBase()))->context());
}

JSValuePtr jsSVGAnimatedNumberListAnimVal(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGAnimatedNumberList* imp = static_cast<SVGAnimatedNumberList*>(static_cast<JSSVGAnimatedNumberList*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->animVal()), static_cast<JSSVGAnimatedNumberList*>(asObject(slot.slotBase()))->context());
}

JSC::JSValuePtr toJS(JSC::ExecState* exec, SVGAnimatedNumberList* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGAnimatedNumberList>(exec, object, context);
}
SVGAnimatedNumberList* toSVGAnimatedNumberList(JSC::JSValuePtr value)
{
    return value->isObject(&JSSVGAnimatedNumberList::s_info) ? static_cast<JSSVGAnimatedNumberList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
