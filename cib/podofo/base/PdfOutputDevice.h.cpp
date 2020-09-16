#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/doc/PdfSignOutputDevice.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-library-type-handler.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
class __zz_cib_Generic<::PoDoFo::PdfOutputDevice> : public ::PoDoFo::PdfOutputDevice {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfOutputDevice>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl)
    : ::PoDoFo::PdfOutputDevice::PdfOutputDevice()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const char* pszFilename, bool bTruncate)
    : ::PoDoFo::PdfOutputDevice::PdfOutputDevice(    std::move(pszFilename),
    std::move(bTruncate))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, char* pBuffer, size_t lLen)
    : ::PoDoFo::PdfOutputDevice::PdfOutputDevice(    std::move(pBuffer),
    std::move(lLen))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const std::ostream* pOutStream)
    : ::PoDoFo::PdfOutputDevice::PdfOutputDevice(    std::move(pOutStream))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, ::PoDoFo::PdfRefCountedBuffer* pOutBuffer)
    : ::PoDoFo::PdfOutputDevice::PdfOutputDevice(    std::move(pOutBuffer))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, std::iostream* pStream)
    : ::PoDoFo::PdfOutputDevice::PdfOutputDevice(    std::move(pStream))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfOutputDevice& __zz_cib_param0)
    : ::PoDoFo::PdfOutputDevice::PdfOutputDevice(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  void Flush() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Flush_0>(
      __zz_cib_h_
    );
  }
  size_t Tell() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Tell_1>(
        __zz_cib_h_
      )
    );
  }
  void Print(const char* pszFormat) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pszFormat)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Print_2>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat))
    );
  }
  void PrintV(const char* pszFormat, long lBytes, va_list argptr) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pszFormat)>, __zz_cib_AbiType_t<decltype(lBytes)>, __zz_cib_AbiType_t<decltype(argptr)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::PrintV_3>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lBytes)>(std::move(lBytes)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(argptr)>(std::move(argptr))
    );
  }
  size_t GetLength() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetLength_4>(
        __zz_cib_h_
      )
    );
  }
  void Write(const char* pBuffer, size_t lLen) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Write_5>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  size_t Read(char* pBuffer, size_t lLen) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Read_6>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
      )
    );
  }
  void Seek(size_t offset) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(offset)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Seek_7>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(offset)>(std::move(offset))
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_8>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfOutputDevice)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class386::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfOutputDevice> : public ::PoDoFo::PdfOutputDevice {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputDevice>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfOutputDevice::PdfOutputDevice;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputDevice>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputDevice>(__zz_cib_proxy, __zz_cib_mtbl);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<bool> bTruncate) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputDevice>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bTruncate));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_3(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputDevice>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
    __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_4(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<const std::ostream*> pOutStream) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputDevice>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<const std::ostream*>(pOutStream));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_5(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer*> pOutBuffer) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputDevice>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer*>(pOutBuffer));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_6(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<std::iostream*> pStream) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputDevice>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<std::iostream*>(pStream));
  }
  static void __zz_cib_decl __zz_cib_delete_7(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetLength_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfOutputDevice::GetLength()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Print_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFormat) {
    __zz_cib_obj->::PoDoFo::PdfOutputDevice::Print(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFormat)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl PrintV_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFormat, __zz_cib_AbiType_t<long> lBytes, __zz_cib_AbiType_t<va_list> argptr) {
    __zz_cib_obj->::PoDoFo::PdfOutputDevice::PrintV(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFormat),
      __zz_cib_::__zz_cib_FromAbiType<long>(lBytes),
      __zz_cib_::__zz_cib_FromAbiType<va_list>(argptr)
    );
  }
  static __zz_cib_AbiType_t<long> __zz_cib_decl PrintVLen_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFormat, __zz_cib_AbiType_t<va_list> args) {
    return __zz_cib_ToAbiType<long>(
      __zz_cib_obj->::PoDoFo::PdfOutputDevice::PrintVLen(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFormat),
        __zz_cib_::__zz_cib_FromAbiType<va_list>(args)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    __zz_cib_obj->::PoDoFo::PdfOutputDevice::Write(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl Read_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfOutputDevice::Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Seek_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<size_t> offset) {
    __zz_cib_obj->::PoDoFo::PdfOutputDevice::Seek(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(offset)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl Tell_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfOutputDevice::Tell()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Flush_16(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfOutputDevice::Flush();
  }
  static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::PoDoFo::PdfOutputDevice** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfSignOutputDevice))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class471::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfOutputDevice))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class386::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfSignOutputDevice*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class471::__zz_cib_classid;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class386::__zz_cib_classid;
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class386 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_new_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_new_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_new_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_delete_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::GetLength_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Print_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::PrintV_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::PrintVLen_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Write_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Read_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Seek_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Tell_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Flush_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 19 };
  return &methodTable;
}
}}}
