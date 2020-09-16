#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfInputDevice.h"
#include "podofo/base/PdfInputStream.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfInputStream::PdfInputStream(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfInputStream::PdfInputStream(PdfInputStream&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfInputStream::~PdfInputStream() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

PoDoFo::PdfInputStream::PdfInputStream()
  : PoDoFo::PdfInputStream(__zz_cib_MyHelper::__zz_cib_new_0(
    this))
  {}
}
namespace PoDoFo {

PoDoFo::PdfFileInputStream::PdfFileInputStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfInputStream(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class378(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFileInputStream::PdfFileInputStream(PdfFileInputStream&& rhs)
  : ::PoDoFo::PdfInputStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFileInputStream::PdfFileInputStream(const ::PoDoFo::PdfFileInputStream& __zz_cib_param0)
  : PoDoFo::PdfFileInputStream(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfFileInputStream::PdfFileInputStream(const char* pszFilename)
  : PoDoFo::PdfFileInputStream(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))))
  {}

PoDoFo::PdfFileInputStream::~PdfFileInputStream() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

::PoDoFo::pdf_long PoDoFo::PdfFileInputStream::Read(char* pBuffer, ::PoDoFo::pdf_long lLen, ::PoDoFo::pdf_long* __zz_cib_param2) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::Read_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param2)>(std::move(__zz_cib_param2))
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfFileInputStream::GetFileLength() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetFileLength_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

FILE* PoDoFo::PdfFileInputStream::GetHandle() {
  return __zz_cib_::__zz_cib_FromAbiType<FILE*>(
    __zz_cib_MyHelper::GetHandle_5<__zz_cib_::__zz_cib_AbiType_t<FILE*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfMemoryInputStream::PdfMemoryInputStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfInputStream(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class378(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfMemoryInputStream::PdfMemoryInputStream(PdfMemoryInputStream&& rhs)
  : ::PoDoFo::PdfInputStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfMemoryInputStream::PdfMemoryInputStream(const ::PoDoFo::PdfMemoryInputStream& __zz_cib_param0)
  : PoDoFo::PdfMemoryInputStream(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfMemoryInputStream::PdfMemoryInputStream(const char* pBuffer, ::PoDoFo::pdf_long lBufferLen)
  : PoDoFo::PdfMemoryInputStream(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lBufferLen)>(std::move(lBufferLen))))
  {}

PoDoFo::PdfMemoryInputStream::~PdfMemoryInputStream() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

::PoDoFo::pdf_long PoDoFo::PdfMemoryInputStream::Read(char* pBuffer, ::PoDoFo::pdf_long lLen, ::PoDoFo::pdf_long* __zz_cib_param2) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::Read_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param2)>(std::move(__zz_cib_param2))
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfDeviceInputStream::PdfDeviceInputStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfInputStream(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class378(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfDeviceInputStream::PdfDeviceInputStream(PdfDeviceInputStream&& rhs)
  : ::PoDoFo::PdfInputStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfDeviceInputStream::PdfDeviceInputStream(const ::PoDoFo::PdfDeviceInputStream& __zz_cib_param0)
  : PoDoFo::PdfDeviceInputStream(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfDeviceInputStream::PdfDeviceInputStream(::PoDoFo::PdfInputDevice* pDevice)
  : PoDoFo::PdfDeviceInputStream(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice))))
  {}

PoDoFo::PdfDeviceInputStream::~PdfDeviceInputStream() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

::PoDoFo::pdf_long PoDoFo::PdfDeviceInputStream::Read(char* pBuffer, ::PoDoFo::pdf_long lLen, ::PoDoFo::pdf_long* __zz_cib_param2) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::Read_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param2)>(std::move(__zz_cib_param2))
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfInputStream> : public ::PoDoFo::PdfInputStream {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class378::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFo_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class378::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfInputStream(h), __zz_cib_h_(h) {}
public:
  static ::PoDoFo::PdfInputStream* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  ::PoDoFo::pdf_long Read(char* pBuffer, ::PoDoFo::pdf_long lLen, ::PoDoFo::pdf_long* pTotalLeft) override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>, __zz_cib_AbiType_t<decltype(pTotalLeft)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::Read_2>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pTotalLeft)>(std::move(pTotalLeft))
      )
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfInputStream* __zz_cib_Helper<::PoDoFo::PdfInputStream>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class379::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfFileInputStream>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfFileInputStream>::__zz_cib_cast_from___zz_cib_Class378(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class380::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfMemoryInputStream>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfMemoryInputStream>::__zz_cib_cast_from___zz_cib_Class378(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class381::__zz_cib_classid:
    return __zz_cib_Helper<PoDoFo::PdfDeviceInputStream>::__zz_cib_from_handle(
      __zz_cib_Helper<PoDoFo::PdfDeviceInputStream>::__zz_cib_cast_from___zz_cib_Class378(h)
    );
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfInputStream>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfInputStream> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfInputStream;
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Read_0(::PoDoFo::PdfInputStream* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> pTotalLeft) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(pTotalLeft)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_1(::PoDoFo::PdfInputStream* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfInputStream>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class378 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputStream>::Read_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputStream>::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfInputStream>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class378::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFileInputStream> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfFileInputStream;
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Read_0(::PoDoFo::PdfFileInputStream* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> __zz_cib_param2) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(__zz_cib_param2)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_1(::PoDoFo::PdfFileInputStream* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfFileInputStream>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class379 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileInputStream>::Read_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileInputStream>::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfFileInputStream>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class379::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfMemoryInputStream> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfMemoryInputStream;
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Read_0(::PoDoFo::PdfMemoryInputStream* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> __zz_cib_param2) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(__zz_cib_param2)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_1(::PoDoFo::PdfMemoryInputStream* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfMemoryInputStream>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class380 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryInputStream>::Read_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryInputStream>::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfMemoryInputStream>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class380::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfDeviceInputStream> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfDeviceInputStream;
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Read_0(::PoDoFo::PdfDeviceInputStream* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> __zz_cib_param2) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(__zz_cib_param2)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_1(::PoDoFo::PdfDeviceInputStream* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfDeviceInputStream>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class381 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceInputStream>::Read_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceInputStream>::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfDeviceInputStream>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class381::__zz_cib_GetMethodTable();
}
}

