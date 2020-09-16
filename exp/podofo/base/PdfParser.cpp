#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfParser.h"
#include "podofo/base/PdfRefCountedInputDevice.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfDocument.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfParser::PdfParser(__zz_cib_AbiType h)
  : ::PoDoFo::PdfTokenizer(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class402(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfParser::PdfParser(PdfParser&& rhs)
  : ::PoDoFo::PdfTokenizer(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfParser::PdfParser(::PoDoFo::PdfVecObjects* pVecObjects)
  : PoDoFo::PdfParser(__zz_cib_MyHelper::__zz_cib_new_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pVecObjects)>(std::move(pVecObjects))))
  {}

PoDoFo::PdfParser::PdfParser(::PoDoFo::PdfVecObjects* pVecObjects, const char* pszFilename, bool bLoadOnDemand)
  : PoDoFo::PdfParser(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pVecObjects)>(std::move(pVecObjects)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bLoadOnDemand)>(std::move(bLoadOnDemand))))
  {}

PoDoFo::PdfParser::PdfParser(::PoDoFo::PdfVecObjects* pVecObjects, const char* pBuffer, long lLen, bool bLoadOnDemand)
  : PoDoFo::PdfParser(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pVecObjects)>(std::move(pVecObjects)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bLoadOnDemand)>(std::move(bLoadOnDemand))))
  {}

PoDoFo::PdfParser::PdfParser(::PoDoFo::PdfVecObjects* pVecObjects, const ::PoDoFo::PdfRefCountedInputDevice& rDevice, bool bLoadOnDemand)
  : PoDoFo::PdfParser(__zz_cib_MyHelper::__zz_cib_new_3(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pVecObjects)>(std::move(pVecObjects)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDevice)>(rDevice),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bLoadOnDemand)>(std::move(bLoadOnDemand))))
  {}

PoDoFo::PdfParser::~PdfParser() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_4(
    h
  );
}

void PoDoFo::PdfParser::ParseFile(const char* pszFilename, bool bLoadOnDemand) {
  __zz_cib_MyHelper::ParseFile_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bLoadOnDemand)>(std::move(bLoadOnDemand))
  );
}

#ifdef _WIN32
void PoDoFo::PdfParser::ParseFile(const wchar_t* pszFilename, bool bLoadOnDemand) {
  __zz_cib_MyHelper::ParseFile_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bLoadOnDemand)>(std::move(bLoadOnDemand))
  );
}
#endif

void PoDoFo::PdfParser::ParseFile(const char* pBuffer, long lLen, bool bLoadOnDemand) {
  __zz_cib_MyHelper::ParseFile_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bLoadOnDemand)>(std::move(bLoadOnDemand))
  );
}

void PoDoFo::PdfParser::ParseFile(const ::PoDoFo::PdfRefCountedInputDevice& rDevice, bool bLoadOnDemand) {
  __zz_cib_MyHelper::ParseFile_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDevice)>(rDevice),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bLoadOnDemand)>(std::move(bLoadOnDemand))
  );
}

bool PoDoFo::PdfParser::QuickEncryptedCheck(const char* pszFilename) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::QuickEncryptedCheck_9<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))
    )
  );
}

int PoDoFo::PdfParser::GetNumberOfIncrementalUpdates() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetNumberOfIncrementalUpdates_10<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfVecObjects* PoDoFo::PdfParser::GetObjects() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfVecObjects*>(
    __zz_cib_MyHelper::GetObjects_11<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfVecObjects*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::EPdfVersion PoDoFo::PdfParser::GetPdfVersion() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVersion>(
    __zz_cib_MyHelper::GetPdfVersion_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfVersion>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfParser::GetPdfVersionString() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetPdfVersionString_13<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfParser::GetTrailer() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetTrailer_14<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfParser::GetLoadOnDemand() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetLoadOnDemand_15<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfParser::IsLinearized() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsLinearized_16<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

size_t PoDoFo::PdfParser::GetFileSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetFileSize_17<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfParser::GetEncrypted() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetEncrypted_18<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfEncrypt* PoDoFo::PdfParser::GetEncrypt() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt*>(
    __zz_cib_MyHelper::GetEncrypt_19<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfEncrypt* PoDoFo::PdfParser::TakeEncrypt() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(
    __zz_cib_MyHelper::TakeEncrypt_20<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfParser::SetPassword(const std::string& sPassword) {
  __zz_cib_MyHelper::SetPassword_21<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(sPassword)>(sPassword)
  );
}

bool PoDoFo::PdfParser::IsStrictParsing() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsStrictParsing_22<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfParser::SetStrictParsing(bool bStrict) {
  __zz_cib_MyHelper::SetStrictParsing_23<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bStrict)>(std::move(bStrict))
  );
}

bool PoDoFo::PdfParser::GetIgnoreBrokenObjects() {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetIgnoreBrokenObjects_24<__zz_cib_::__zz_cib_AbiType_t<bool>>(

    )
  );
}

void PoDoFo::PdfParser::SetIgnoreBrokenObjects(bool bBroken) {
  __zz_cib_MyHelper::SetIgnoreBrokenObjects_25<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(bBroken)>(std::move(bBroken))
  );
}

long PoDoFo::PdfParser::GetMaxObjectCount() {
  return __zz_cib_::__zz_cib_FromAbiType<long>(
    __zz_cib_MyHelper::GetMaxObjectCount_26<__zz_cib_::__zz_cib_AbiType_t<long>>(

    )
  );
}

void PoDoFo::PdfParser::SetMaxObjectCount(long nMaxObjects) {
  __zz_cib_MyHelper::SetMaxObjectCount_27<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(nMaxObjects)>(std::move(nMaxObjects))
  );
}

::PoDoFo::pdf_long PoDoFo::PdfParser::GetXRefOffset() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetXRefOffset_28<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfParser::HasXRefStream() {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasXRefStream_29<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfParser::FindToken(const char* pszToken, const long lRange) {
  __zz_cib_MyHelper::FindToken_30<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszToken)>(std::move(pszToken)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lRange)>(std::move(lRange))
  );
}

void PoDoFo::PdfParser::FindToken2(const char* pszToken, const long lRange, size_t searchEnd) {
  __zz_cib_MyHelper::FindToken2_31<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszToken)>(std::move(pszToken)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lRange)>(std::move(lRange)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(searchEnd)>(std::move(searchEnd))
  );
}

void PoDoFo::PdfParser::ReadDocumentStructure() {
  __zz_cib_MyHelper::ReadDocumentStructure_32<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfParser::HasLinearizationDict() {
  __zz_cib_MyHelper::HasLinearizationDict_33<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfParser::MergeTrailer(const ::PoDoFo::PdfObject* pTrailer) {
  __zz_cib_MyHelper::MergeTrailer_34<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pTrailer)>(std::move(pTrailer))
  );
}

void PoDoFo::PdfParser::ReadTrailer() {
  __zz_cib_MyHelper::ReadTrailer_35<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfParser::ReadXRef(::PoDoFo::pdf_long* pXRefOffset) {
  __zz_cib_MyHelper::ReadXRef_36<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pXRefOffset)>(std::move(pXRefOffset))
  );
}

void PoDoFo::PdfParser::ReadXRefContents(::PoDoFo::pdf_long lOffset, bool bPositionAtEnd) {
  __zz_cib_MyHelper::ReadXRefContents_37<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lOffset)>(std::move(lOffset)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bPositionAtEnd)>(std::move(bPositionAtEnd))
  );
}

void PoDoFo::PdfParser::ReadXRefSubsection(::PoDoFo::pdf_int64& nFirstObject, ::PoDoFo::pdf_int64& nNumObjects) {
  __zz_cib_MyHelper::ReadXRefSubsection_38<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nFirstObject)>(nFirstObject),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nNumObjects)>(nNumObjects)
  );
}

void PoDoFo::PdfParser::ReadXRefStreamContents(::PoDoFo::pdf_long lOffset, bool bReadOnlyTrailer) {
  __zz_cib_MyHelper::ReadXRefStreamContents_39<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lOffset)>(std::move(lOffset)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bReadOnlyTrailer)>(std::move(bReadOnlyTrailer))
  );
}

void PoDoFo::PdfParser::ReadObjects() {
  __zz_cib_MyHelper::ReadObjects_40<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfParser::ReadObjectsInternal() {
  __zz_cib_MyHelper::ReadObjectsInternal_41<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfParser::ReadObjectFromStream(int nObjNo, int nIndex) {
  __zz_cib_MyHelper::ReadObjectFromStream_42<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nObjNo)>(std::move(nObjNo)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
  );
}

bool PoDoFo::PdfParser::IsPdfFile() {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsPdfFile_43<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfParser::ReadNextTrailer() {
  __zz_cib_MyHelper::ReadNextTrailer_44<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void PoDoFo::PdfParser::CheckEOFMarker() {
  __zz_cib_MyHelper::CheckEOFMarker_45<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}
}
namespace PoDoFo {

PoDoFo::PdfParser::TXRefEntry::TXRefEntry(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfParser::TXRefEntry::TXRefEntry(TXRefEntry&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfParser::TXRefEntry::TXRefEntry(const ::PoDoFo::PdfParser::TXRefEntry& __zz_cib_param0)
  : PoDoFo::PdfParser::TXRefEntry(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfParser::TXRefEntry::~TXRefEntry() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

PoDoFo::PdfParser::TXRefEntry::TXRefEntry()
  : PoDoFo::PdfParser::TXRefEntry(__zz_cib_MyHelper::__zz_cib_new_2(
    ))
  {}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfParser> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfParser;
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetNextToken_0(::PoDoFo::PdfParser* __zz_cib_obj, __zz_cib_AbiType_t<const char*&> pszToken, __zz_cib_AbiType_t<::PoDoFo::EPdfTokenType*> peType) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->GetNextToken(
        __zz_cib_::__zz_cib_FromAbiType<const char*&>(pszToken),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfTokenType*>(peType)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_1(::PoDoFo::PdfParser* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfParser>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class393 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetNextToken_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfParser>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class393::__zz_cib_GetMethodTable();
}
}

