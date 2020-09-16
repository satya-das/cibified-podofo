#include "podofo/base/PdfData.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/doc/PdfSignOutputDevice.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(__zz_cib_AbiType h)
  : ::PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class386(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(PdfSignOutputDevice&& rhs)
  : ::PoDoFo::PdfOutputDevice(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(const ::PoDoFo::PdfSignOutputDevice& __zz_cib_param0)
  : PoDoFo::PdfSignOutputDevice(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(::PoDoFo::PdfOutputDevice* pRealDevice)
  : PoDoFo::PdfSignOutputDevice(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pRealDevice)>(std::move(pRealDevice))))
  {}

PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice(const char* pszFilename)
  : PoDoFo::PdfSignOutputDevice(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))))
  {}

PoDoFo::PdfSignOutputDevice::~PdfSignOutputDevice() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_3(
    h
  );
}

void PoDoFo::PdfSignOutputDevice::SetSignatureSize(size_t lSignatureSize) {
  __zz_cib_MyHelper::SetSignatureSize_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lSignatureSize)>(std::move(lSignatureSize))
  );
}

size_t PoDoFo::PdfSignOutputDevice::GetSignatureSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetSignatureSize_5<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfData* PoDoFo::PdfSignOutputDevice::GetSignatureBeacon() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfData*>(
    __zz_cib_MyHelper::GetSignatureBeacon_6<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfData*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfSignOutputDevice::HasSignaturePosition() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasSignaturePosition_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfSignOutputDevice::AdjustByteRange() {
  __zz_cib_MyHelper::AdjustByteRange_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

size_t PoDoFo::PdfSignOutputDevice::ReadForSignature(char* pBuffer, size_t lLen) {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::ReadForSignature_9<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

void PoDoFo::PdfSignOutputDevice::SetSignature(const ::PoDoFo::PdfData& sigData) {
  __zz_cib_MyHelper::SetSignature_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(sigData)>(sigData)
  );
}

size_t PoDoFo::PdfSignOutputDevice::GetLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetLength_11<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfSignOutputDevice::Print(const char* pszFormat) {
  __zz_cib_MyHelper::Print_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat))
  );
}

void PoDoFo::PdfSignOutputDevice::Write(const char* pBuffer, size_t lLen) {
  __zz_cib_MyHelper::Write_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
  );
}

size_t PoDoFo::PdfSignOutputDevice::Read(char* pBuffer, size_t lLen) {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::Read_14<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

void PoDoFo::PdfSignOutputDevice::Seek(size_t offset) {
  __zz_cib_MyHelper::Seek_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(offset)>(std::move(offset))
  );
}

size_t PoDoFo::PdfSignOutputDevice::Tell() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::Tell_16<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfSignOutputDevice::Flush() {
  __zz_cib_MyHelper::Flush_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfSignOutputDevice;
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl ReadForSignature_0(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->ReadForSignature(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasSignaturePosition_1(const ::PoDoFo::PdfSignOutputDevice* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->HasSignaturePosition()
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetSignatureSize_2(const ::PoDoFo::PdfSignOutputDevice* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->GetSignatureSize()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AdjustByteRange_3(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj) {
    __zz_cib_obj->AdjustByteRange();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSignatureSize_4(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<size_t> lSignatureSize) {
    __zz_cib_obj->SetSignatureSize(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lSignatureSize)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Flush_5(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj) {
    __zz_cib_obj->Flush();
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfData*> __zz_cib_decl GetSignatureBeacon_6(const ::PoDoFo::PdfSignOutputDevice* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfData*>(
      __zz_cib_obj->GetSignatureBeacon()
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl Tell_7(const ::PoDoFo::PdfSignOutputDevice* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->Tell()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Print_8(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFormat) {
    __zz_cib_obj->Print(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFormat)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl PrintV_9(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFormat, __zz_cib_AbiType_t<long> lBytes, __zz_cib_AbiType_t<va_list> argptr) {
    __zz_cib_obj->PrintV(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFormat),
      __zz_cib_::__zz_cib_FromAbiType<long>(lBytes),
      __zz_cib_::__zz_cib_FromAbiType<va_list>(argptr)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetLength_10(const ::PoDoFo::PdfSignOutputDevice* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->GetLength()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_11(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    __zz_cib_obj->Write(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSignature_12(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfData&> sigData) {
    __zz_cib_obj->SetSignature(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfData&>(sigData)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl Read_13(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Seek_14(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<size_t> offset) {
    __zz_cib_obj->Seek(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(offset)
    );
  }
  static void __zz_cib_decl __zz_cib_delete_15(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfSignOutputDevice>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class471 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::ReadForSignature_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::HasSignaturePosition_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::GetSignatureSize_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::AdjustByteRange_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::SetSignatureSize_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Flush_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::GetSignatureBeacon_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Tell_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Print_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::PrintV_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::GetLength_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Write_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::SetSignature_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Read_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Seek_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_delete_15)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 16 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfSignOutputDevice>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class471::__zz_cib_GetMethodTable();
}
}

