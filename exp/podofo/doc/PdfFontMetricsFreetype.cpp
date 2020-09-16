#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfFontMetricsFreetype.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {
}
namespace PoDoFo {

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFontMetrics(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class437(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(PdfFontMetricsFreetype&& rhs)
  : ::PoDoFo::PdfFontMetrics(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(const ::PoDoFo::PdfFontMetricsFreetype& __zz_cib_param0)
  : PoDoFo::PdfFontMetricsFreetype(__zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(FT_Library* pLibrary, const char* pszFilename, bool pIsSymbol, const char* pszSubsetPrefix)
  : PoDoFo::PdfFontMetricsFreetype(__zz_cib_MyHelper::__zz_cib_new_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pLibrary)>(std::move(pLibrary)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pIsSymbol)>(std::move(pIsSymbol)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubsetPrefix)>(std::move(pszSubsetPrefix))))
  {}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(FT_Library* pLibrary, const char* pBuffer, unsigned int nBufLen, bool pIsSymbol, const char* pszSubsetPrefix)
  : PoDoFo::PdfFontMetricsFreetype(__zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pLibrary)>(std::move(pLibrary)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nBufLen)>(std::move(nBufLen)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pIsSymbol)>(std::move(pIsSymbol)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubsetPrefix)>(std::move(pszSubsetPrefix))))
  {}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(FT_Library* pLibrary, const ::PoDoFo::PdfRefCountedBuffer& rBuffer, bool pIsSymbol, const char* pszSubsetPrefix)
  : PoDoFo::PdfFontMetricsFreetype(__zz_cib_MyHelper::__zz_cib_new_3(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pLibrary)>(std::move(pLibrary)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rBuffer)>(rBuffer),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pIsSymbol)>(std::move(pIsSymbol)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubsetPrefix)>(std::move(pszSubsetPrefix))))
  {}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(FT_Library* pLibrary, FT_Face face, bool pIsSymbol, const char* pszSubsetPrefix)
  : PoDoFo::PdfFontMetricsFreetype(__zz_cib_MyHelper::__zz_cib_new_4(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pLibrary)>(std::move(pLibrary)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(face)>(std::move(face)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pIsSymbol)>(std::move(pIsSymbol)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubsetPrefix)>(std::move(pszSubsetPrefix))))
  {}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(FT_Library* pLibrary, ::PoDoFo::PdfObject* pDescriptor)
  : PoDoFo::PdfFontMetricsFreetype(__zz_cib_MyHelper::__zz_cib_new_5(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pLibrary)>(std::move(pLibrary)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDescriptor)>(std::move(pDescriptor))))
  {}

::PoDoFo::PdfFontMetricsFreetype* PoDoFo::PdfFontMetricsFreetype::CreateForSubsetting(FT_Library* pLibrary, const char* pszFilename, bool pIsSymbol, const char* pszSubsetPrefix) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetricsFreetype*>(
    __zz_cib_MyHelper::CreateForSubsetting_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFontMetricsFreetype*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pLibrary)>(std::move(pLibrary)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pIsSymbol)>(std::move(pIsSymbol)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubsetPrefix)>(std::move(pszSubsetPrefix))
    )
  );
}

PoDoFo::PdfFontMetricsFreetype::~PdfFontMetricsFreetype() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_7(
    h
  );
}

void PoDoFo::PdfFontMetricsFreetype::GetWidthArray(::PoDoFo::PdfVariant& var, unsigned int nFirst, unsigned int nLast, const ::PoDoFo::PdfEncoding* pEncoding) const {
  __zz_cib_MyHelper::GetWidthArray_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nFirst)>(std::move(nFirst)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nLast)>(std::move(nLast)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetGlyphWidth(int nGlyphId) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetGlyphWidth_9<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nGlyphId)>(std::move(nGlyphId))
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetGlyphWidth(const char* pszGlyphname) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetGlyphWidth_10<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphname)>(std::move(pszGlyphname))
    )
  );
}

void PoDoFo::PdfFontMetricsFreetype::GetBoundingBox(::PoDoFo::PdfArray& array) const {
  __zz_cib_MyHelper::GetBoundingBox_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(array)>(array)
  );
}

double PoDoFo::PdfFontMetricsFreetype::CharWidth(unsigned char c) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::CharWidth_12<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::UnicodeCharWidth(unsigned short c) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::UnicodeCharWidth_13<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetLineSpacing() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetLineSpacing_14<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetUnderlineThickness() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetUnderlineThickness_15<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetUnderlinePosition() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetUnderlinePosition_16<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetStrikeOutPosition() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetStrikeOutPosition_17<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetStrikeoutThickness() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetStrikeoutThickness_18<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFontMetricsFreetype::GetFontname() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetFontname_19<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

unsigned int PoDoFo::PdfFontMetricsFreetype::GetWeight() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned int>(
    __zz_cib_MyHelper::GetWeight_20<__zz_cib_::__zz_cib_AbiType_t<unsigned int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetAscent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetAscent_21<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetPdfAscent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetPdfAscent_22<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetDescent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetDescent_23<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetPdfDescent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetPdfDescent_24<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfFontMetricsFreetype::GetItalicAngle() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetItalicAngle_25<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

long PoDoFo::PdfFontMetricsFreetype::GetGlyphId(long lUnicode) const {
  return __zz_cib_::__zz_cib_FromAbiType<long>(
    __zz_cib_MyHelper::GetGlyphId_26<__zz_cib_::__zz_cib_AbiType_t<long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lUnicode)>(std::move(lUnicode))
    )
  );
}

bool PoDoFo::PdfFontMetricsFreetype::IsSymbol() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSymbol_27<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFontMetricsFreetype::GetFontData() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetFontData_28<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfFontMetricsFreetype::GetFontDataLen() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetFontDataLen_29<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfFontMetricsFreetype::IsBold() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsBold_30<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfFontMetricsFreetype::IsItalic() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsItalic_31<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

FT_Face PoDoFo::PdfFontMetricsFreetype::GetFace() {
  return __zz_cib_::__zz_cib_FromAbiType<FT_Face>(
    __zz_cib_MyHelper::GetFace_32<__zz_cib_::__zz_cib_AbiType_t<FT_Face>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfFontMetricsFreetype> : public ::PoDoFo::PdfFontMetricsFreetype {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class439::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFo_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class439::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfFontMetricsFreetype(h), __zz_cib_h_(h) {}
public:
  static ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  bool IsSymbol() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::IsSymbol_27>(
        __zz_cib_h_
      )
    );
  }
  int GetItalicAngle() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetItalicAngle_25>(
        __zz_cib_h_
      )
    );
  }
  double GetDescent() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetDescent_23>(
        __zz_cib_h_
      )
    );
  }
  double GetPdfAscent() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetPdfAscent_22>(
        __zz_cib_h_
      )
    );
  }
  double UnicodeCharWidth(unsigned short c) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(c)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::UnicodeCharWidth_13>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
      )
    );
  }
  void GetWidthArray(::PoDoFo::PdfVariant& var, unsigned int nFirst, unsigned int nLast, const ::PoDoFo::PdfEncoding* pEncoding) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(var)>, __zz_cib_AbiType_t<decltype(nFirst)>, __zz_cib_AbiType_t<decltype(nLast)>, __zz_cib_AbiType_t<decltype(pEncoding)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetWidthArray_8>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nFirst)>(std::move(nFirst)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nLast)>(std::move(nLast)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))
    );
  }
  double GetUnderlineThickness() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetUnderlineThickness_15>(
        __zz_cib_h_
      )
    );
  }
  double CharWidth(unsigned char c) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(c)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::CharWidth_12>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
      )
    );
  }
  double GetStrikeOutPosition() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetStrikeOutPosition_17>(
        __zz_cib_h_
      )
    );
  }
  double GetGlyphWidth(const char* pszGlyphname) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pszGlyphname)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetGlyphWidth_10>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphname)>(std::move(pszGlyphname))
      )
    );
  }
  double GetGlyphWidth(int nGlyphId) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(nGlyphId)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetGlyphWidth_9>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(nGlyphId)>(std::move(nGlyphId))
      )
    );
  }
  unsigned int GetWeight() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<unsigned int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<unsigned int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetWeight_20>(
        __zz_cib_h_
      )
    );
  }
  double GetLineSpacing() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetLineSpacing_14>(
        __zz_cib_h_
      )
    );
  }
  double GetUnderlinePosition() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetUnderlinePosition_16>(
        __zz_cib_h_
      )
    );
  }
  long GetGlyphId(long lUnicode) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<long>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(lUnicode)>);
    return __zz_cib_FromAbiType<long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetGlyphId_26>(
        __zz_cib_h_,
        __zz_cib_::__zz_cib_ToAbiType<decltype(lUnicode)>(std::move(lUnicode))
      )
    );
  }
  void GetBoundingBox(::PoDoFo::PdfArray& array) const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(array)>);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetBoundingBox_11>(
      __zz_cib_h_,
      __zz_cib_::__zz_cib_ToAbiType<decltype(array)>(array)
    );
  }
  const char* GetFontname() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const char*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const char*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetFontname_19>(
        __zz_cib_h_
      )
    );
  }
  double GetStrikeoutThickness() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetStrikeoutThickness_18>(
        __zz_cib_h_
      )
    );
  }
  double GetPdfDescent() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetPdfDescent_24>(
        __zz_cib_h_
      )
    );
  }
  const char* GetFontData() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<const char*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const char*>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetFontData_28>(
        __zz_cib_h_
      )
    );
  }
  ::PoDoFo::pdf_long GetFontDataLen() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetFontDataLen_29>(
        __zz_cib_h_
      )
    );
  }
  double GetAscent() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::GetAscent_21>(
        __zz_cib_h_
      )
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfFontMetricsFreetype* __zz_cib_Helper<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class439::__zz_cib_classid:
    return new ::PoDoFo::PdfFontMetricsFreetype(h);
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfFontMetricsFreetype;
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSymbol_0(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsSymbol()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetItalicAngle_1(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->GetItalicAngle()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetDescent_2(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetDescent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfAscent_3(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetPdfAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl UnicodeCharWidth_4(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj, __zz_cib_AbiType_t<unsigned short> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->UnicodeCharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned short>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetWidthArray_5(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> var, __zz_cib_AbiType_t<unsigned int> nFirst, __zz_cib_AbiType_t<unsigned int> nLast, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> pEncoding) {
    __zz_cib_obj->GetWidthArray(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(var),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nFirst),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nLast),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(pEncoding)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlineThickness_6(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetUnderlineThickness()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl CharWidth_7(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->CharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned char>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeOutPosition_8(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetStrikeOutPosition()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_9(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszGlyphname) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphname)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_10(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj, __zz_cib_AbiType_t<int> nGlyphId) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<int>(nGlyphId)
      )
    );
  }
  static __zz_cib_AbiType_t<unsigned int> __zz_cib_decl GetWeight_11(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned int>(
      __zz_cib_obj->GetWeight()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetLineSpacing_12(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetLineSpacing()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlinePosition_13(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetUnderlinePosition()
    );
  }
  static __zz_cib_AbiType_t<long> __zz_cib_decl GetGlyphId_14(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj, __zz_cib_AbiType_t<long> lUnicode) {
    return __zz_cib_ToAbiType<long>(
      __zz_cib_obj->GetGlyphId(
        __zz_cib_::__zz_cib_FromAbiType<long>(lUnicode)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetBoundingBox_15(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray&> array) {
    __zz_cib_obj->GetBoundingBox(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(array)
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontname_16(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->GetFontname()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeoutThickness_17(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetStrikeoutThickness()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfDescent_18(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetPdfDescent()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontData_19(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->GetFontData()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetFontDataLen_20(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->GetFontDataLen()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetAscent_21(const ::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetAscent()
    );
  }
  static void __zz_cib_decl __zz_cib_delete_22(::PoDoFo::PdfFontMetricsFreetype* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class439 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::IsSymbol_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetItalicAngle_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetDescent_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetPdfAscent_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::UnicodeCharWidth_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetWidthArray_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetUnderlineThickness_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::CharWidth_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetStrikeOutPosition_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetGlyphWidth_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetGlyphWidth_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetWeight_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetLineSpacing_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetUnderlinePosition_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetGlyphId_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetBoundingBox_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetFontname_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetStrikeoutThickness_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetPdfDescent_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetFontData_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetFontDataLen_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::GetAscent_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_delete_22)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 23 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfFontMetricsFreetype>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class439::__zz_cib_GetMethodTable();
}
}

