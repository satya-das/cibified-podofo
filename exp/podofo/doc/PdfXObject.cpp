#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfMemDocument.h"
#include "podofo/doc/PdfXObject.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfXObject::PdfXObject(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class418(h))
  , ::PoDoFo::PdfCanvas(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class335(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfXObject::PdfXObject(PdfXObject&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , ::PoDoFo::PdfCanvas(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfXObject::PdfXObject(const ::PoDoFo::PdfXObject& __zz_cib_param0)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfXObject::PdfXObject(const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfDocument* pParent, const char* pszPrefix, bool bWithoutObjNum)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bWithoutObjNum)>(std::move(bWithoutObjNum))))
  {}

PoDoFo::PdfXObject::PdfXObject(const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfVecObjects* pParent, const char* pszPrefix)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix))))
  {}

PoDoFo::PdfXObject::PdfXObject(const ::PoDoFo::PdfMemDocument& rSourceDoc, int nPage, ::PoDoFo::PdfDocument* pParent, const char* pszPrefix, bool bUseTrimBox)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_new_3(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rSourceDoc)>(rSourceDoc),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nPage)>(std::move(nPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bUseTrimBox)>(std::move(bUseTrimBox))))
  {}

PoDoFo::PdfXObject::PdfXObject(::PoDoFo::PdfDocument* pDoc, int nPage, const char* pszPrefix, bool bUseTrimBox)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_new_4(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nPage)>(std::move(nPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bUseTrimBox)>(std::move(bUseTrimBox))))
  {}

PoDoFo::PdfXObject::PdfXObject(::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_new_5(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
  {}

PoDoFo::PdfXObject::~PdfXObject() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_6(
    h
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfXObject::GetContents() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetContents_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfXObject::GetContentsForAppending() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetContentsForAppending_8<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfXObject::GetResources() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetResources_9<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfRect PoDoFo::PdfXObject::GetPageSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetPageSize_10<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfXObject::GetIdentifier() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetIdentifier_11<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfReference& PoDoFo::PdfXObject::GetObjectReference() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(
    __zz_cib_MyHelper::GetObjectReference_12<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfReference&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfXObject::InitXObject(const ::PoDoFo::PdfRect& rRect, const char* pszPrefix) {
  __zz_cib_MyHelper::InitXObject_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix))
  );
}

PoDoFo::PdfXObject::PdfXObject(const char* pszSubType, ::PoDoFo::PdfDocument* pParent, const char* pszPrefix)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_new_14(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubType)>(std::move(pszSubType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix))))
  {}

PoDoFo::PdfXObject::PdfXObject(const char* pszSubType, ::PoDoFo::PdfVecObjects* pParent, const char* pszPrefix)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_new_15(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubType)>(std::move(pszSubType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszPrefix)>(std::move(pszPrefix))))
  {}

PoDoFo::PdfXObject::PdfXObject(const char* pszSubType, ::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfXObject(__zz_cib_MyHelper::__zz_cib_new_16(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubType)>(std::move(pszSubType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
  {}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfXObject> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfXObject;
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect> __zz_cib_decl GetPageSize_0(const ::PoDoFo::PdfXObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect>(
      __zz_cib_obj->GetPageSize()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetResources_1(const ::PoDoFo::PdfXObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->GetResources()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetContents_2(const ::PoDoFo::PdfXObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->GetContents()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetContentsForAppending_3(const ::PoDoFo::PdfXObject* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->GetContentsForAppending()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_4(::PoDoFo::PdfXObject* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfXObject>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class478 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::GetPageSize_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::GetResources_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::GetContents_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::GetContentsForAppending_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfXObject>::__zz_cib_delete_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfXObject>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class478::__zz_cib_GetMethodTable();
}
}

