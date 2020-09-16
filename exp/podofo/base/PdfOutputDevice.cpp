#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/doc/PdfSignOutputDevice.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfOutputDevice::PdfOutputDevice(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfOutputDevice::PdfOutputDevice(PdfOutputDevice&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfOutputDevice::PdfOutputDevice(const ::PoDoFo::PdfOutputDevice& __zz_cib_param0)
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfOutputDevice::PdfOutputDevice()
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_new_1(
    this))
  {}

PoDoFo::PdfOutputDevice::PdfOutputDevice(const char* pszFilename, bool bTruncate)
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bTruncate)>(std::move(bTruncate))))
  {}

PoDoFo::PdfOutputDevice::PdfOutputDevice(char* pBuffer, size_t lLen)
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_new_3(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
  {}

PoDoFo::PdfOutputDevice::PdfOutputDevice(const std::ostream* pOutStream)
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_new_4(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pOutStream)>(std::move(pOutStream))))
  {}

PoDoFo::PdfOutputDevice::PdfOutputDevice(::PoDoFo::PdfRefCountedBuffer* pOutBuffer)
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_new_5(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pOutBuffer)>(std::move(pOutBuffer))))
  {}

PoDoFo::PdfOutputDevice::PdfOutputDevice(std::iostream* pStream)
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_new_6(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))))
  {}

PoDoFo::PdfOutputDevice::~PdfOutputDevice() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_7(
    h
  );
}

size_t PoDoFo::PdfOutputDevice::GetLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetLength_8<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfOutputDevice::Print(const char* pszFormat) {
  __zz_cib_MyHelper::Print_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat))
  );
}

void PoDoFo::PdfOutputDevice::PrintV(const char* pszFormat, long lBytes, va_list argptr) {
  __zz_cib_MyHelper::PrintV_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lBytes)>(std::move(lBytes)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(argptr)>(std::move(argptr))
  );
}

long PoDoFo::PdfOutputDevice::PrintVLen(const char* pszFormat, va_list args) {
  return __zz_cib_::__zz_cib_FromAbiType<long>(
    __zz_cib_MyHelper::PrintVLen_11<__zz_cib_::__zz_cib_AbiType_t<long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(args)>(std::move(args))
    )
  );
}

void PoDoFo::PdfOutputDevice::Write(const char* pBuffer, size_t lLen) {
  __zz_cib_MyHelper::Write_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
  );
}

size_t PoDoFo::PdfOutputDevice::Read(char* pBuffer, size_t lLen) {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::Read_13<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

void PoDoFo::PdfOutputDevice::Seek(size_t offset) {
  __zz_cib_MyHelper::Seek_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(offset)>(std::move(offset))
  );
}

size_t PoDoFo::PdfOutputDevice::Tell() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::Tell_15<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfOutputDevice::Flush() {
  __zz_cib_MyHelper::Flush_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfOutputDevice> : public ::PoDoFo::PdfOutputDevice {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class386::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFo_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class386::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfOutputDevice(h), __zz_cib_h_(h) {}
public:
  static ::PoDoFo::PdfOutputDevice* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void Flush() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Flush_16>(
      __zz_cib_h_
    );
  }
  size_t Tell() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Tell_15>(
        __zz_cib_h_
      )
    );
  }
  void Print(const char* pszFormat) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pszFormat)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Print_9>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat))
    );
  }
  void PrintV(const char* pszFormat, long lBytes, va_list argptr) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pszFormat)>, __zz_cib_AbiType_t<decltype(lBytes)>, __zz_cib_AbiType_t<decltype(argptr)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::PrintV_10>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lBytes)>(std::move(lBytes)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(argptr)>(std::move(argptr))
    );
  }
  size_t GetLength() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetLength_8>(
        __zz_cib_h_
      )
    );
  }
  void Write(const char* pBuffer, size_t lLen) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Write_12>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  size_t Read(char* pBuffer, size_t lLen) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Read_13>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
      )
    );
  }
  void Seek(size_t offset) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(offset)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Seek_14>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(offset)>(std::move(offset))
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfOutputDevice* __zz_cib_Helper<::PoDoFo::PdfOutputDevice>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class471::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfSignOutputDevice>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfSignOutputDevice>::__zz_cib_cast_from___zz_cib_Class386(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class386::__zz_cib_classid:
    return new ::PoDoFo::PdfOutputDevice(h);
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputDevice>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfOutputDevice> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfOutputDevice;
  static __zz_cib_AbiType_t<void> __zz_cib_decl Flush_0(::PoDoFo::PdfOutputDevice* __zz_cib_obj) {
    __zz_cib_obj->Flush();
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl Tell_1(const ::PoDoFo::PdfOutputDevice* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->Tell()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Print_2(::PoDoFo::PdfOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFormat) {
    __zz_cib_obj->Print(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFormat)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl PrintV_3(::PoDoFo::PdfOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFormat, __zz_cib_AbiType_t<long> lBytes, __zz_cib_AbiType_t<va_list> argptr) {
    __zz_cib_obj->PrintV(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFormat),
      __zz_cib_::__zz_cib_FromAbiType<long>(lBytes),
      __zz_cib_::__zz_cib_FromAbiType<va_list>(argptr)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetLength_4(const ::PoDoFo::PdfOutputDevice* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->GetLength()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_5(::PoDoFo::PdfOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    __zz_cib_obj->Write(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl Read_6(::PoDoFo::PdfOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Seek_7(::PoDoFo::PdfOutputDevice* __zz_cib_obj, __zz_cib_AbiType_t<size_t> offset) {
    __zz_cib_obj->Seek(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(offset)
    );
  }
  static void __zz_cib_decl __zz_cib_delete_8(::PoDoFo::PdfOutputDevice* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfOutputDevice>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class386 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Flush_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Tell_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Print_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::PrintV_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::GetLength_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Write_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Read_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Seek_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_delete_8)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfOutputDevice>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class386::__zz_cib_GetMethodTable();
}
}

