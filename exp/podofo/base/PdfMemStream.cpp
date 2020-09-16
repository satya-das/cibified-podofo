#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfMemStream.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfOutputStream.h"
#include "podofo/base/PdfStream.h"
#include "podofo/base/PdfVecObjects.h"
#include <vector>

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfMemStream::PdfMemStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfStream(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class400(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfMemStream::PdfMemStream(PdfMemStream&& rhs)
  : ::PoDoFo::PdfStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfMemStream::PdfMemStream(::PoDoFo::PdfObject* pParent)
  : PoDoFo::PdfMemStream(__zz_cib_MyHelper::__zz_cib_new_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
  {}

PoDoFo::PdfMemStream::PdfMemStream(const ::PoDoFo::PdfMemStream& rhs)
  : PoDoFo::PdfMemStream(__zz_cib_MyHelper::__zz_cib_copy_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
  {}

PoDoFo::PdfMemStream::~PdfMemStream() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

void PoDoFo::PdfMemStream::Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::PdfEncrypt* pEncrypt) {
  __zz_cib_MyHelper::Write_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
  );
}

void PoDoFo::PdfMemStream::GetCopy(char** pBuffer, ::PoDoFo::pdf_long* lLen) const {
  __zz_cib_MyHelper::GetCopy_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
  );
}

void PoDoFo::PdfMemStream::GetCopy(::PoDoFo::PdfOutputStream* pStream) const {
  __zz_cib_MyHelper::GetCopy_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
  );
}

const char* PoDoFo::PdfMemStream::Get() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::Get_6<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfMemStream::GetLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetLength_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfMemStream::FlateCompress() {
  __zz_cib_MyHelper::FlateCompress_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfMemStream::Uncompress() {
  __zz_cib_MyHelper::Uncompress_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfMemStream::Empty() {
  __zz_cib_MyHelper::Empty_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

const ::PoDoFo::PdfStream& PoDoFo::PdfMemStream::operator=(const ::PoDoFo::PdfStream& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_11<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfStream&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

const char* PoDoFo::PdfMemStream::GetInternalBuffer() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetInternalBuffer_12<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfMemStream::GetInternalBufferSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetInternalBufferSize_13<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfMemStream::BeginAppendImpl(const ::std::vector<::PoDoFo::EPdfFilter>& vecFilters) {
  __zz_cib_MyHelper::BeginAppendImpl_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(vecFilters)>(vecFilters)
  );
}

void PoDoFo::PdfMemStream::AppendImpl(const char* pszString, size_t lLen) {
  __zz_cib_MyHelper::AppendImpl_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
  );
}

void PoDoFo::PdfMemStream::EndAppendImpl() {
  __zz_cib_MyHelper::EndAppendImpl_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfMemStream> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfMemStream;
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndAppendImpl_0(::PoDoFo::PdfMemStream* __zz_cib_obj) {
    __zz_cib_obj->EndAppendImpl();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginAppendImpl_1(::PoDoFo::PdfMemStream* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::EPdfFilter>&> vecFilters) {
    __zz_cib_obj->BeginAppendImpl(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::EPdfFilter>&>(vecFilters)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetLength_2(const ::PoDoFo::PdfMemStream* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->GetLength()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetCopy_3(const ::PoDoFo::PdfMemStream* __zz_cib_obj, __zz_cib_AbiType_t<char**> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> lLen) {
    __zz_cib_obj->GetCopy(
      __zz_cib_::__zz_cib_FromAbiType<char**>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_4(::PoDoFo::PdfMemStream* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetCopy_5(const ::PoDoFo::PdfMemStream* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pStream) {
    __zz_cib_obj->GetCopy(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetInternalBuffer_6(const ::PoDoFo::PdfMemStream* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->GetInternalBuffer()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AppendImpl_7(::PoDoFo::PdfMemStream* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszString, __zz_cib_AbiType_t<size_t> lLen) {
    __zz_cib_obj->AppendImpl(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszString),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetInternalBufferSize_8(const ::PoDoFo::PdfMemStream* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->GetInternalBufferSize()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_9(::PoDoFo::PdfMemStream* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfMemStream>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class382 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::EndAppendImpl_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::BeginAppendImpl_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::GetLength_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::GetCopy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::Write_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::GetCopy_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::GetInternalBuffer_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::AppendImpl_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::GetInternalBufferSize_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::__zz_cib_delete_9)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfMemStream>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class382::__zz_cib_GetMethodTable();
}
}

