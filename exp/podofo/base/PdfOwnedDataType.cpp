#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOwnedDataType.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfOwnedDataType::PdfOwnedDataType(__zz_cib_AbiType h)
  : ::PoDoFo::PdfDataType(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class346(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfOwnedDataType::PdfOwnedDataType(PdfOwnedDataType&& rhs)
  : ::PoDoFo::PdfDataType(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfOwnedDataType::~PdfOwnedDataType() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_0(
    h
  );
}

PoDoFo::PdfOwnedDataType::PdfOwnedDataType()
  : PoDoFo::PdfOwnedDataType(__zz_cib_MyHelper::__zz_cib_new_1(
    this))
  {}

PoDoFo::PdfOwnedDataType::PdfOwnedDataType(const ::PoDoFo::PdfOwnedDataType& rhs)
  : PoDoFo::PdfOwnedDataType(__zz_cib_MyHelper::__zz_cib_copy_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
  {}

const ::PoDoFo::PdfObject* PoDoFo::PdfOwnedDataType::GetOwner() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetOwner_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfOwnedDataType::GetOwner() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetOwner_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfOwnedDataType& PoDoFo::PdfOwnedDataType::operator=(const ::PoDoFo::PdfOwnedDataType& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOwnedDataType&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOwnedDataType&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfOwnedDataType::GetIndirectObject(const ::PoDoFo::PdfReference& rReference) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetIndirectObject_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rReference)>(rReference)
    )
  );
}

::PoDoFo::PdfVecObjects* PoDoFo::PdfOwnedDataType::GetObjectOwner() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(
    __zz_cib_MyHelper::GetObjectOwner_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfOwnedDataType::SetOwner(::PoDoFo::PdfObject* pOwner) {
  __zz_cib_MyHelper::SetOwner_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pOwner)>(std::move(pOwner))
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfOwnedDataType> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfOwnedDataType;
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetOwner_0(::PoDoFo::PdfOwnedDataType* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pOwner) {
    __zz_cib_obj->SetOwner(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pOwner)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetDirty_1(::PoDoFo::PdfOwnedDataType* __zz_cib_obj, __zz_cib_AbiType_t<bool> bDirty) {
    __zz_cib_obj->SetDirty(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bDirty)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_2(const ::PoDoFo::PdfOwnedDataType* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDirty_3(const ::PoDoFo::PdfOwnedDataType* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsDirty()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_4(::PoDoFo::PdfOwnedDataType* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfOwnedDataType>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class392 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::SetOwner_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::SetDirty_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::Write_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::IsDirty_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::__zz_cib_delete_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfOwnedDataType>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class392::__zz_cib_GetMethodTable();
}
}

