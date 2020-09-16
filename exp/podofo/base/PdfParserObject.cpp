#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfParser.h"
#include "podofo/base/PdfParserObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfRefCountedInputDevice.h"
#include "podofo/base/PdfVecObjects.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfParserObject::PdfParserObject(__zz_cib_AbiType h)
  : ::PoDoFo::PdfObject(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class384(h))
  , ::PoDoFo::PdfTokenizer(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class402(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfParserObject::PdfParserObject(PdfParserObject&& rhs)
  : ::PoDoFo::PdfObject(std::move(rhs))
  , ::PoDoFo::PdfTokenizer(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfParserObject::PdfParserObject(::PoDoFo::PdfVecObjects* pCreator, const ::PoDoFo::PdfRefCountedInputDevice& rDevice, const ::PoDoFo::PdfRefCountedBuffer& rBuffer, ::PoDoFo::pdf_long lOffset)
  : PoDoFo::PdfParserObject(__zz_cib_MyHelper::__zz_cib_new_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pCreator)>(std::move(pCreator)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDevice)>(rDevice),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rBuffer)>(rBuffer),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lOffset)>(std::move(lOffset))))
  {}

PoDoFo::PdfParserObject::PdfParserObject(const ::PoDoFo::PdfRefCountedBuffer& rBuffer)
  : PoDoFo::PdfParserObject(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rBuffer)>(rBuffer)))
  {}

PoDoFo::PdfParserObject::~PdfParserObject() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

void PoDoFo::PdfParserObject::ParseFile(::PoDoFo::PdfEncrypt* pEncrypt, bool bIsTrailer) {
  __zz_cib_MyHelper::ParseFile_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bIsTrailer)>(std::move(bIsTrailer))
  );
}

bool PoDoFo::PdfParserObject::HasStreamToParse() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasStreamToParse_4<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfParserObject::IsLoadOnDemand() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsLoadOnDemand_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfParserObject::SetLoadOnDemand(bool bDelayed) {
  __zz_cib_MyHelper::SetLoadOnDemand_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bDelayed)>(std::move(bDelayed))
  );
}

void PoDoFo::PdfParserObject::SetObjectNumber(unsigned int nObjNo) {
  __zz_cib_MyHelper::SetObjectNumber_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nObjNo)>(std::move(nObjNo))
  );
}

void PoDoFo::PdfParserObject::FreeObjectMemory(bool bForce) {
  __zz_cib_MyHelper::FreeObjectMemory_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bForce)>(std::move(bForce))
  );
}

::PoDoFo::pdf_int64 PoDoFo::PdfParserObject::GetOffset() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(
    __zz_cib_MyHelper::GetOffset_9<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_int64>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfParserObject::DelayedLoadImpl() {
  __zz_cib_MyHelper::DelayedLoadImpl_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfParserObject::DelayedStreamLoadImpl() {
  __zz_cib_MyHelper::DelayedStreamLoadImpl_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfParserObject::ParseStream() {
  __zz_cib_MyHelper::ParseStream_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfParserObject> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfParserObject;
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetNextToken_0(::PoDoFo::PdfParserObject* __zz_cib_obj, __zz_cib_AbiType_t<const char*&> pszToken, __zz_cib_AbiType_t<::PoDoFo::EPdfTokenType*> peType) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->GetNextToken(
        __zz_cib_::__zz_cib_FromAbiType<const char*&>(pszToken),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfTokenType*>(peType)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AfterDelayedLoad_1(::PoDoFo::PdfParserObject* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfDataType> eDataType) {
    __zz_cib_obj->AfterDelayedLoad(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfDataType>(eDataType)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DelayedStreamLoadImpl_2(::PoDoFo::PdfParserObject* __zz_cib_obj) {
    __zz_cib_obj->DelayedStreamLoadImpl();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_3(const ::PoDoFo::PdfParserObject* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*> pEncrypt, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> keyStop) {
    __zz_cib_obj->Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt*>(pEncrypt),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(keyStop)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DelayedLoadImpl_4(::PoDoFo::PdfParserObject* __zz_cib_obj) {
    __zz_cib_obj->DelayedLoadImpl();
  }
  static void __zz_cib_decl __zz_cib_delete_5(::PoDoFo::PdfParserObject* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfParserObject>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class395 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::GetNextToken_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::AfterDelayedLoad_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::DelayedStreamLoadImpl_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::Write_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::DelayedLoadImpl_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_delete_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfParserObject>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class395::__zz_cib_GetMethodTable();
}
}

