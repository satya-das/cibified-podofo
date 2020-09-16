#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOwnedDataType.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template<> struct __zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfOwnedDataType> : public ::PoDoFo::PdfOwnedDataType {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfOwnedDataType>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl)
    : ::PoDoFo::PdfOwnedDataType::PdfOwnedDataType()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfOwnedDataType& rhs)
    : ::PoDoFo::PdfOwnedDataType::PdfOwnedDataType(    rhs)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  void SetOwner(::PoDoFo::PdfObject* pOwner) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pOwner)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::SetOwner_0>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOwner)>(std::move(pOwner))
    );
  }
  void SetDirty(bool bDirty) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(bDirty)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::SetDirty_1>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDirty)>(std::move(bDirty))
    );
  }
  void Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pDevice)>, __zz_cib_AbiType_t<decltype(eWriteMode)>, __zz_cib_AbiType_t<decltype(pEncrypt)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Write_2>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }
  bool IsDirty() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsDirty_3>(
        __zz_cib_h_
      )
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfOwnedDataType)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class392::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfOwnedDataType> : public ::PoDoFo::PdfOwnedDataType {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOwnedDataType>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfOwnedDataType::PdfOwnedDataType;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static void __zz_cib_decl __zz_cib_delete_0(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOwnedDataType>(__zz_cib_proxy, __zz_cib_mtbl);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_2(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOwnedDataType>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl GetOwner_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfOwnedDataType::GetOwner()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetOwner_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfOwnedDataType::GetOwner()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOwnedDataType&> __zz_cib_decl __zz_cib_OperatorEqual_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfOwnedDataType&> rhs) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOwnedDataType&>(
      __zz_cib_obj->::PoDoFo::PdfOwnedDataType::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfOwnedDataType&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetIndirectObject_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rReference) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfOwnedDataType::GetIndirectObject(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rReference)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> __zz_cib_decl GetObjectOwner_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfVecObjects*>(
      __zz_cib_obj->::PoDoFo::PdfOwnedDataType::GetObjectOwner()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetOwner_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pOwner) {
    __zz_cib_obj->::PoDoFo::PdfOwnedDataType::SetOwner(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pOwner)
    );
  }
  static ::PoDoFo::PdfDataType* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class346(::PoDoFo::PdfOwnedDataType* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfOwnedDataType* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class346(::PoDoFo::PdfDataType* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfOwnedDataType*>(__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class392 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::__zz_cib_delete_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::__zz_cib_copy_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::GetOwner_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::GetOwner_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::__zz_cib_OperatorEqual_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::GetIndirectObject_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::GetObjectOwner_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::SetOwner_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::__zz_cib_cast_to___zz_cib_Class346),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::__zz_cib_cast_from___zz_cib_Class346),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOwnedDataType>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 12 };
  return &methodTable;
}
}}}
