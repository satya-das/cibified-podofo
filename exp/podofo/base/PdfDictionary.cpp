#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfDictionary::PdfDictionary(__zz_cib_AbiType h)
  : ::PoDoFo::PdfOwnedDataType(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class392(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfDictionary::PdfDictionary(PdfDictionary&& rhs)
  : ::PoDoFo::PdfOwnedDataType(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfDictionary::PdfDictionary()
  : PoDoFo::PdfDictionary(__zz_cib_MyHelper::__zz_cib_new_0(
    this))
  {}

PoDoFo::PdfDictionary::PdfDictionary(const ::PoDoFo::PdfDictionary& rhs)
  : PoDoFo::PdfDictionary(__zz_cib_MyHelper::__zz_cib_copy_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
  {}

PoDoFo::PdfDictionary::~PdfDictionary() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

const ::PoDoFo::PdfDictionary& PoDoFo::PdfDictionary::operator=(const ::PoDoFo::PdfDictionary& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_3<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfDictionary::operator==(const ::PoDoFo::PdfDictionary& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_4<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

bool PoDoFo::PdfDictionary::operator!=(const ::PoDoFo::PdfDictionary& rhs) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorNotEq_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

void PoDoFo::PdfDictionary::Clear() {
  __zz_cib_MyHelper::Clear_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfDictionary::AddKey(const ::PoDoFo::PdfName& identifier, const ::PoDoFo::PdfObject& rObject) {
  __zz_cib_MyHelper::AddKey_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(identifier)>(identifier),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rObject)>(rObject)
  );
}

void PoDoFo::PdfDictionary::AddKey(const ::PoDoFo::PdfName& identifier, const ::PoDoFo::PdfObject* pObject) {
  __zz_cib_MyHelper::AddKey_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(identifier)>(identifier),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfDictionary::GetKey(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetKey_9<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfDictionary::GetKey(const ::PoDoFo::PdfName& key) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetKey_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfDictionary::FindKey(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::FindKey_11<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfDictionary::FindKey(const ::PoDoFo::PdfName& key) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::FindKey_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfDictionary::FindKeyParent(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::FindKeyParent_13<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfDictionary::FindKeyParent(const ::PoDoFo::PdfName& key) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::FindKeyParent_14<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

const ::PoDoFo::PdfObject& PoDoFo::PdfDictionary::MustGetKey(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(
    __zz_cib_MyHelper::MustGetKey_15<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

::PoDoFo::pdf_int64 PoDoFo::PdfDictionary::GetKeyAsLong(const ::PoDoFo::PdfName& key, ::PoDoFo::pdf_int64 lDefault) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(
    __zz_cib_MyHelper::GetKeyAsLong_16<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_int64>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lDefault)>(std::move(lDefault))
    )
  );
}

double PoDoFo::PdfDictionary::GetKeyAsReal(const ::PoDoFo::PdfName& key, double dDefault) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetKeyAsReal_17<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dDefault)>(std::move(dDefault))
    )
  );
}

bool PoDoFo::PdfDictionary::GetKeyAsBool(const ::PoDoFo::PdfName& key, bool bDefault) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetKeyAsBool_18<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDefault)>(std::move(bDefault))
    )
  );
}

::PoDoFo::PdfName PoDoFo::PdfDictionary::GetKeyAsName(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfName>(
    __zz_cib_MyHelper::GetKeyAsName_19<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfName>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

bool PoDoFo::PdfDictionary::HasKey(const ::PoDoFo::PdfName& key) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasKey_20<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(key)>(key)
    )
  );
}

bool PoDoFo::PdfDictionary::RemoveKey(const ::PoDoFo::PdfName& identifier) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::RemoveKey_21<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(identifier)>(identifier)
    )
  );
}

void PoDoFo::PdfDictionary::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt) const {
  __zz_cib_MyHelper::Write_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
  );
}

void PoDoFo::PdfDictionary::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::EPdfWriteMode eWriteMode, const ::PoDoFo::PdfEncrypt* pEncrypt, const ::PoDoFo::PdfName& keyStop) const {
  __zz_cib_MyHelper::Write_23<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eWriteMode)>(std::move(eWriteMode)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(keyStop)>(keyStop)
  );
}

size_t PoDoFo::PdfDictionary::GetSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetSize_24<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::TKeyMap& PoDoFo::PdfDictionary::GetKeys() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TKeyMap&>(
    __zz_cib_MyHelper::GetKeys_25<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::TKeyMap&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::TKeyMap& PoDoFo::PdfDictionary::GetKeys() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TKeyMap&>(
    __zz_cib_MyHelper::GetKeys_26<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::TKeyMap&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfDictionary::IsDirty() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsDirty_27<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDictionary::SetDirty(bool bDirty) {
  __zz_cib_MyHelper::SetDirty_28<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bDirty)>(std::move(bDirty))
  );
}

::PoDoFo::TCIKeyMap PoDoFo::PdfDictionary::begin() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TCIKeyMap>(
    __zz_cib_MyHelper::begin_29<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::TCIKeyMap>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::TCIKeyMap PoDoFo::PdfDictionary::end() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TCIKeyMap>(
    __zz_cib_MyHelper::end_30<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::TCIKeyMap>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDictionary::SetOwner(::PoDoFo::PdfObject* pOwner) {
  __zz_cib_MyHelper::SetOwner_31<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pOwner)>(std::move(pOwner))
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfDictionary> : public ::PoDoFo::PdfDictionary {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class349::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFo_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class349::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfDictionary(h), __zz_cib_h_(h) {}
public:
  static ::PoDoFo::PdfDictionary* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void SetOwner(::PoDoFo::PdfObject* pOwner) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pOwner)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::SetOwner_31>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOwner)>(std::move(pOwner))
    );
  }
  void SetDirty(bool bDirty) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(bDirty)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::SetDirty_28>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDirty)>(std::move(bDirty))
    );
  }
  bool IsDirty() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsDirty_27>(
        __zz_cib_h_
      )
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfDictionary* __zz_cib_Helper<::PoDoFo::PdfDictionary>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class349::__zz_cib_classid:
    return new ::PoDoFo::PdfDictionary(h);
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfDictionary>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfDictionary> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfDictionary;
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetOwner_0(::PoDoFo::PdfDictionary* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pOwner) {
    __zz_cib_obj->SetOwner(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pOwner)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetDirty_1(::PoDoFo::PdfDictionary* __zz_cib_obj, __zz_cib_AbiType_t<bool> bDirty) {
    __zz_cib_obj->SetDirty(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bDirty)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDirty_3(const ::PoDoFo::PdfDictionary* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsDirty()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_4(::PoDoFo::PdfDictionary* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfDictionary>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class349 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::SetOwner_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::SetDirty_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::Write_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::IsDirty_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDictionary>::__zz_cib_delete_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfDictionary>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class349::__zz_cib_GetMethodTable();
}
}

