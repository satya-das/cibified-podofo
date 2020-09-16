#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfFontMetricsFreetype.h"

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
class __zz_cib_Generic<::PoDoFo::PdfFontMetricsFreetype> : public ::PoDoFo::PdfFontMetricsFreetype {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFontMetricsFreetype>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, FT_Library* pLibrary, const char* pszFilename, bool pIsSymbol, const char* pszSubsetPrefix)
    : ::PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(    std::move(pLibrary),
    std::move(pszFilename),
    std::move(pIsSymbol),
    std::move(pszSubsetPrefix))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, FT_Library* pLibrary, const char* pBuffer, unsigned int nBufLen, bool pIsSymbol, const char* pszSubsetPrefix)
    : ::PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(    std::move(pLibrary),
    std::move(pBuffer),
    std::move(nBufLen),
    std::move(pIsSymbol),
    std::move(pszSubsetPrefix))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, FT_Library* pLibrary, const ::PoDoFo::PdfRefCountedBuffer& rBuffer, bool pIsSymbol, const char* pszSubsetPrefix)
    : ::PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(    std::move(pLibrary),
    rBuffer,
    std::move(pIsSymbol),
    std::move(pszSubsetPrefix))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, FT_Library* pLibrary, FT_Face face, bool pIsSymbol, const char* pszSubsetPrefix)
    : ::PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(    std::move(pLibrary),
    std::move(face),
    std::move(pIsSymbol),
    std::move(pszSubsetPrefix))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, FT_Library* pLibrary, ::PoDoFo::PdfObject* pDescriptor)
    : ::PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(    std::move(pLibrary),
    std::move(pDescriptor))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const ::PoDoFo::PdfFontMetricsFreetype& __zz_cib_param0)
    : ::PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(    __zz_cib_param0)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  bool IsSymbol() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsSymbol_0>(
        __zz_cib_h_
      )
    );
  }
  int GetItalicAngle() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetItalicAngle_1>(
        __zz_cib_h_
      )
    );
  }
  double GetDescent() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetDescent_2>(
        __zz_cib_h_
      )
    );
  }
  double GetPdfAscent() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetPdfAscent_3>(
        __zz_cib_h_
      )
    );
  }
  double UnicodeCharWidth(unsigned short c) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(c)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::UnicodeCharWidth_4>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
      )
    );
  }
  void GetWidthArray(::PoDoFo::PdfVariant& var, unsigned int nFirst, unsigned int nLast, const ::PoDoFo::PdfEncoding* pEncoding) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(var)>, __zz_cib_AbiType_t<decltype(nFirst)>, __zz_cib_AbiType_t<decltype(nLast)>, __zz_cib_AbiType_t<decltype(pEncoding)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetWidthArray_5>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nFirst)>(std::move(nFirst)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nLast)>(std::move(nLast)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))
    );
  }
  double GetUnderlineThickness() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetUnderlineThickness_6>(
        __zz_cib_h_
      )
    );
  }
  double CharWidth(unsigned char c) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(c)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CharWidth_7>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
      )
    );
  }
  double GetStrikeOutPosition() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetStrikeOutPosition_8>(
        __zz_cib_h_
      )
    );
  }
  double GetGlyphWidth(const char* pszGlyphname) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pszGlyphname)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetGlyphWidth_9>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphname)>(std::move(pszGlyphname))
      )
    );
  }
  double GetGlyphWidth(int nGlyphId) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(nGlyphId)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetGlyphWidth_10>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(nGlyphId)>(std::move(nGlyphId))
      )
    );
  }
  unsigned int GetWeight() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<unsigned int>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<unsigned int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetWeight_11>(
        __zz_cib_h_
      )
    );
  }
  double GetLineSpacing() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetLineSpacing_12>(
        __zz_cib_h_
      )
    );
  }
  double GetUnderlinePosition() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetUnderlinePosition_13>(
        __zz_cib_h_
      )
    );
  }
  long GetGlyphId(long lUnicode) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<long>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(lUnicode)>);
    return __zz_cib_FromAbiType<long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetGlyphId_14>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(lUnicode)>(std::move(lUnicode))
      )
    );
  }
  void GetBoundingBox(::PoDoFo::PdfArray& array) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(array)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetBoundingBox_15>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(array)>(array)
    );
  }
  const char* GetFontname() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const char*>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const char*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetFontname_16>(
        __zz_cib_h_
      )
    );
  }
  double GetStrikeoutThickness() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetStrikeoutThickness_17>(
        __zz_cib_h_
      )
    );
  }
  double GetPdfDescent() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetPdfDescent_18>(
        __zz_cib_h_
      )
    );
  }
  const char* GetFontData() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const char*>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const char*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetFontData_19>(
        __zz_cib_h_
      )
    );
  }
  ::PoDoFo::pdf_long GetFontDataLen() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetFontDataLen_20>(
        __zz_cib_h_
      )
    );
  }
  double GetAscent() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetAscent_21>(
        __zz_cib_h_
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_22>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfFontMetricsFreetype)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class439::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype> : public ::PoDoFo::PdfFontMetricsFreetype {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontMetricsFreetype>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontMetricsFreetype>(__zz_cib_proxy, __zz_cib_mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<FT_Library*> pLibrary, __zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<bool> pIsSymbol, __zz_cib_AbiType_t<const char*> pszSubsetPrefix) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontMetricsFreetype>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<FT_Library*>(pLibrary),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
    __zz_cib_::__zz_cib_FromAbiType<bool>(pIsSymbol),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubsetPrefix));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<FT_Library*> pLibrary, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<unsigned int> nBufLen, __zz_cib_AbiType_t<bool> pIsSymbol, __zz_cib_AbiType_t<const char*> pszSubsetPrefix) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontMetricsFreetype>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<FT_Library*>(pLibrary),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
    __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nBufLen),
    __zz_cib_::__zz_cib_FromAbiType<bool>(pIsSymbol),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubsetPrefix));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_3(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<FT_Library*> pLibrary, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> rBuffer, __zz_cib_AbiType_t<bool> pIsSymbol, __zz_cib_AbiType_t<const char*> pszSubsetPrefix) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontMetricsFreetype>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<FT_Library*>(pLibrary),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(rBuffer),
    __zz_cib_::__zz_cib_FromAbiType<bool>(pIsSymbol),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubsetPrefix));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_4(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<FT_Library*> pLibrary, __zz_cib_AbiType_t<FT_Face> face, __zz_cib_AbiType_t<bool> pIsSymbol, __zz_cib_AbiType_t<const char*> pszSubsetPrefix) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontMetricsFreetype>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<FT_Library*>(pLibrary),
    __zz_cib_::__zz_cib_FromAbiType<FT_Face>(face),
    __zz_cib_::__zz_cib_FromAbiType<bool>(pIsSymbol),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubsetPrefix));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_5(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl, __zz_cib_AbiType_t<FT_Library*> pLibrary, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pDescriptor) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontMetricsFreetype>(__zz_cib_proxy, __zz_cib_mtbl,     __zz_cib_::__zz_cib_FromAbiType<FT_Library*>(pLibrary),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pDescriptor));
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFontMetricsFreetype*> __zz_cib_decl CreateForSubsetting_6(__zz_cib_AbiType_t<FT_Library*> pLibrary, __zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<bool> pIsSymbol, __zz_cib_AbiType_t<const char*> pszSubsetPrefix) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFontMetricsFreetype*>(
      ::PoDoFo::PdfFontMetricsFreetype::CreateForSubsetting(
        __zz_cib_::__zz_cib_FromAbiType<FT_Library*>(pLibrary),
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
        __zz_cib_::__zz_cib_FromAbiType<bool>(pIsSymbol),
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubsetPrefix)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_delete_7(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetWidthArray_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> var, __zz_cib_AbiType_t<unsigned int> nFirst, __zz_cib_AbiType_t<unsigned int> nLast, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> pEncoding) {
    __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetWidthArray(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(var),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nFirst),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nLast),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(pEncoding)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nGlyphId) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<int>(nGlyphId)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszGlyphname) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphname)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetBoundingBox_11(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray&> array) {
    __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetBoundingBox(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(array)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl CharWidth_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::CharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned char>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl UnicodeCharWidth_13(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned short> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::UnicodeCharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned short>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetLineSpacing_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetLineSpacing()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlineThickness_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetUnderlineThickness()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlinePosition_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetUnderlinePosition()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeOutPosition_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetStrikeOutPosition()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeoutThickness_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetStrikeoutThickness()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontname_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetFontname()
    );
  }
  static __zz_cib_AbiType_t<unsigned int> __zz_cib_decl GetWeight_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned int>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetWeight()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetAscent_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfAscent_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetPdfAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetDescent_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetDescent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfDescent_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetPdfDescent()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetItalicAngle_25(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetItalicAngle()
    );
  }
  static __zz_cib_AbiType_t<long> __zz_cib_decl GetGlyphId_26(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lUnicode) {
    return __zz_cib_ToAbiType<long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetGlyphId(
        __zz_cib_::__zz_cib_FromAbiType<long>(lUnicode)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSymbol_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::IsSymbol()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontData_28(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetFontData()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetFontDataLen_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetFontDataLen()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsBold_30(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::IsBold()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsItalic_31(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::IsItalic()
    );
  }
  static __zz_cib_AbiType_t<FT_Face> __zz_cib_decl GetFace_32(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<FT_Face>(
      __zz_cib_obj->::PoDoFo::PdfFontMetricsFreetype::GetFace()
    );
  }
  static ::PoDoFo::PdfFontMetrics* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class437(::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class437(::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFontMetricsFreetype*>(__zz_cib_obj);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::PoDoFo::PdfFontMetricsFreetype** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFontMetricsFreetype))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class439::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class439::__zz_cib_classid;
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class439 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_new_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_new_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::CreateForSubsetting_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_delete_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetWidthArray_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetGlyphWidth_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetGlyphWidth_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetBoundingBox_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::CharWidth_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::UnicodeCharWidth_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetLineSpacing_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetUnderlineThickness_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetUnderlinePosition_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetStrikeOutPosition_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetStrikeoutThickness_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetFontname_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetWeight_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetAscent_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetPdfAscent_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetDescent_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetPdfDescent_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetItalicAngle_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetGlyphId_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::IsSymbol_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetFontData_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetFontDataLen_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::IsBold_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::IsItalic_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetFace_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_cast_to___zz_cib_Class437),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_cast_from___zz_cib_Class437),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 37 };
  return &methodTable;
}
}}}
