/***************************************************************************
 *   Copyright (C) 2008 by Dominik Seichter                                *
 *   domseichter@web.de                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Library General Public License as       *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                         *
 *   In addition, as a special exception, the copyright holders give       *
 *   permission to link the code of portions of this program with the      *
 *   OpenSSL library under certain conditions as described in each         *
 *   individual source file, and distribute linked combinations            *
 *   including the two.                                                    *
 *   You must obey the GNU General Public License in all respects          *
 *   for all of the code used other than OpenSSL.  If you modify           *
 *   file(s) with this exception, you may extend this exception to your    *
 *   version of the file(s), but you are not obligated to do so.  If you   *
 *   do not wish to do so, delete this exception statement from your       *
 *   version.  If you delete this exception statement from all source      *
 *   files in the program, then also delete it here.                       *
 ***************************************************************************/
#ifndef _PDF_ENCODING_FACTORY_H_
#  define _PDF_ENCODING_FACTORY_H_
#  include "PdfDefines.h"
// #include "util/PdfMutex.h"
#  include "string.h"

#include "__zz_cib_internal/podofo/base/PdfEncodingFactory-predef.h"

namespace PoDoFo
{
  class PdfEncoding;
  class PdfDocEncoding;
  class PdfMacRomanEncoding;
  class PdfObject;
  class PdfWinAnsiEncoding;
  class PdfStandardEncoding;
  class PdfMacExpertEncoding;
  class PdfSymbolEncoding;
  class PdfZapfDingbatsEncoding;
  class PdfIdentityEncoding;
  class PdfWin1250Encoding;
  class PdfIso88592Encoding;
  /** This factory creates a PdfEncoding
   *  from an existing object in the PDF.
   */
  class PdfEncodingFactory
  {
  public:
    PdfEncodingFactory(PdfEncodingFactory&& rhs);
  public:
    PdfEncodingFactory(const PdfEncodingFactory& );
    ~PdfEncodingFactory();
    /** Singleton method which returns a global instance
     *  of PdfDocEncoding.
     *
     *  \returns global instance of PdfDocEncoding
     */
    static const PdfEncoding* GlobalPdfDocEncodingInstance();
    /** Singleton method which returns a global instance
     *  of WinAnsiEncoding.
     *
     *  \returns global instance of WinAnsiEncoding
     *
     *  \see GlobalWin1250EncodingInstance, GlobalIso88592EncodingInstance
     */
    static const PdfEncoding* GlobalWinAnsiEncodingInstance();
    /** Singleton method which returns a global instance
     *  of MacRomanEncoding.
     *
     *  \returns global instance of MacRomanEncoding
     */
    static const PdfEncoding* GlobalMacRomanEncodingInstance();
    // OC 13.08.2010:
    /** Singleton method which returns a global instance
     *  of StandardEncoding.
     *
     *  \returns global instance of StandardEncoding
     */
    static const PdfEncoding* GlobalStandardEncodingInstance();
    // OC 13.08.2010:
    /** Singleton method which returns a global instance
     *  of MacExpertEncoding.
     *
     *  \returns global instance of MacExpertEncoding
     */
    static const PdfEncoding* GlobalMacExpertEncodingInstance();
    // OC 13.08.2010:
    /** Singleton method which returns a global instance
     *  of SymbolEncoding.
     *
     *  \returns global instance of SymbolEncoding
     */
    static const PdfEncoding* GlobalSymbolEncodingInstance();
    // OC 13.08.2010:
    /** Singleton method which returns a global instance
     *  of ZapfDingbatsEncoding.
     *
     *  \returns global instance of ZapfDingbatsEncoding
     */
    static const PdfEncoding* GlobalZapfDingbatsEncodingInstance();
    /** Singleton method which returns a global instance
     *  of IndentityEncoding useful for writing direct UTF8 strings.
     *
     *  \returns global instance of IdentityEncoding
     */
    static const PdfEncoding* GlobalIdentityEncodingInstance();
    /** Singleton method which returns a global instance
     *  of Win1250Encoding.
     *
     *  \returns global instance of Win1250Encoding
     *
     *  \see GlobalWinAnsiEncodingInstance, GlobalIso88592EncodingInstance
     */
    static const PdfEncoding* GlobalWin1250EncodingInstance();
    /** Singleton method which returns a global instance
     *  of Iso88592Encoding.
     *
     *  \returns global instance of Iso88592Encoding
     *
     *  \see GlobalWinAnsiEncodingInstance, GlobalWin1250EncodingInstance
     */
    static const PdfEncoding* GlobalIso88592EncodingInstance();
    /** Free's the memory allocated by
     *  the global encoding instancess in this singleton.
     *
     *  PoDoFo will reallocated these encodings as soon
     *  as they are needed again.
     *
     *  Only call this method if no other class
     *  of PoDoFo exists anymore, as PdfString etc
     *  contain pointers to the global instances.
     *
     */
    static void FreeGlobalEncodingInstances();
    static void PoDoFoClientAttached();

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(PdfEncodingFactory, PoDoFo::PdfEncodingFactory);
  };
}

#include "__zz_cib_internal/podofo/base/PdfEncodingFactory-postdef.h"
#endif
