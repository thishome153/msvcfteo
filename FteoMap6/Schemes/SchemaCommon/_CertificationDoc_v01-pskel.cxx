// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "_CertificationDoc_v01-pskel.hxx"

namespace Cer1
{
  // tCertificationDoc_pskel
  //

  void tCertificationDoc_pskel::
  Organization_parser (::Simple1::s500_pskel& p)
  {
    this->Organization_parser_ = &p;
  }

  void tCertificationDoc_pskel::
  Date_parser (::xml_schema::date_pskel& p)
  {
    this->Date_parser_ = &p;
  }

  void tCertificationDoc_pskel::
  Number_parser (::Simple1::s100_pskel& p)
  {
    this->Number_parser_ = &p;
  }

  void tCertificationDoc_pskel::
  Official_parser (::Cer1::Official_pskel& p)
  {
    this->Official_parser_ = &p;
  }

  void tCertificationDoc_pskel::
  parsers (::Simple1::s500_pskel& Organization,
           ::xml_schema::date_pskel& Date,
           ::Simple1::s100_pskel& Number,
           ::Cer1::Official_pskel& Official)
  {
    this->Organization_parser_ = &Organization;
    this->Date_parser_ = &Date;
    this->Number_parser_ = &Number;
    this->Official_parser_ = &Official;
  }

  tCertificationDoc_pskel::
  tCertificationDoc_pskel ()
  : Organization_parser_ (0),
    Date_parser_ (0),
    Number_parser_ (0),
    Official_parser_ (0)
  {
  }

  // Official_pskel
  //

  void Official_pskel::
  Appointment_parser (::Simple1::s1_255_pskel& p)
  {
    this->Appointment_parser_ = &p;
  }

  void Official_pskel::
  FamilyName_parser (::KVZU::SMEV::rus_100_pskel& p)
  {
    this->FamilyName_parser_ = &p;
  }

  void Official_pskel::
  FirstName_parser (::KVZU::SMEV::rus_100_pskel& p)
  {
    this->FirstName_parser_ = &p;
  }

  void Official_pskel::
  Patronymic_parser (::KVZU::SMEV::rus_100_pskel& p)
  {
    this->Patronymic_parser_ = &p;
  }

  void Official_pskel::
  parsers (::Simple1::s1_255_pskel& Appointment,
           ::KVZU::SMEV::rus_100_pskel& FamilyName,
           ::KVZU::SMEV::rus_100_pskel& FirstName,
           ::KVZU::SMEV::rus_100_pskel& Patronymic)
  {
    this->Appointment_parser_ = &Appointment;
    this->FamilyName_parser_ = &FamilyName;
    this->FirstName_parser_ = &FirstName;
    this->Patronymic_parser_ = &Patronymic;
  }

  Official_pskel::
  Official_pskel ()
  : Appointment_parser_ (0),
    FamilyName_parser_ (0),
    FirstName_parser_ (0),
    Patronymic_parser_ (0)
  {
  }
}

namespace Cer1
{
  // tCertificationDoc_pskel
  //

  void tCertificationDoc_pskel::
  Organization ()
  {
  }

  void tCertificationDoc_pskel::
  Date (const ::xml_schema::date&)
  {
  }

  void tCertificationDoc_pskel::
  Number ()
  {
  }

  void tCertificationDoc_pskel::
  Official ()
  {
  }

  void tCertificationDoc_pskel::
  post_tCertificationDoc ()
  {
  }

  bool tCertificationDoc_pskel::
  _start_element_impl (const ::xml_schema::ro_string& ns,
                       const ::xml_schema::ro_string& n,
                       const ::xml_schema::ro_string* t)
  {
    XSD_UNUSED (t);

    if (this->::xml_schema::complex_content::_start_element_impl (ns, n, t))
      return true;

    if (n == "Organization" && ns == "urn://x-artefacts-rosreestr-ru/commons/complex-types/certification-doc/1.0")
    {
      this->::xml_schema::complex_content::context_.top ().parser_ = this->Organization_parser_;

      if (this->Organization_parser_)
        this->Organization_parser_->pre ();

      return true;
    }

    if (n == "Date" && ns == "urn://x-artefacts-rosreestr-ru/commons/complex-types/certification-doc/1.0")
    {
      this->::xml_schema::complex_content::context_.top ().parser_ = this->Date_parser_;

      if (this->Date_parser_)
        this->Date_parser_->pre ();

      return true;
    }

    if (n == "Number" && ns == "urn://x-artefacts-rosreestr-ru/commons/complex-types/certification-doc/1.0")
    {
      this->::xml_schema::complex_content::context_.top ().parser_ = this->Number_parser_;

      if (this->Number_parser_)
        this->Number_parser_->pre ();

      return true;
    }

    if (n == "Official" && ns == "urn://x-artefacts-rosreestr-ru/commons/complex-types/certification-doc/1.0")
    {
      this->::xml_schema::complex_content::context_.top ().parser_ = this->Official_parser_;

      if (this->Official_parser_)
        this->Official_parser_->pre ();

      return true;
    }

    return false;
  }

  bool tCertificationDoc_pskel::
  _end_element_impl (const ::xml_schema::ro_string& ns,
                     const ::xml_schema::ro_string& n)
  {
    if (this->::xml_schema::complex_content::_end_element_impl (ns, n))
      return true;

    if (n == "Organization" && ns == "urn://x-artefacts-rosreestr-ru/commons/complex-types/certification-doc/1.0")
    {
      if (this->Organization_parser_)
      {
        this->Organization_parser_->post_s500 ();
        this->Organization ();
      }

      return true;
    }

    if (n == "Date" && ns == "urn://x-artefacts-rosreestr-ru/commons/complex-types/certification-doc/1.0")
    {
      if (this->Date_parser_)
        this->Date (this->Date_parser_->post_date ());

      return true;
    }

    if (n == "Number" && ns == "urn://x-artefacts-rosreestr-ru/commons/complex-types/certification-doc/1.0")
    {
      if (this->Number_parser_)
      {
        this->Number_parser_->post_s100 ();
        this->Number ();
      }

      return true;
    }

    if (n == "Official" && ns == "urn://x-artefacts-rosreestr-ru/commons/complex-types/certification-doc/1.0")
    {
      if (this->Official_parser_)
      {
        this->Official_parser_->post_Official ();
        this->Official ();
      }

      return true;
    }

    return false;
  }

  // Official_pskel
  //

  void Official_pskel::
  Appointment ()
  {
  }

  void Official_pskel::
  FamilyName ()
  {
  }

  void Official_pskel::
  FirstName ()
  {
  }

  void Official_pskel::
  Patronymic ()
  {
  }

  void Official_pskel::
  post_Official ()
  {
  }

  bool Official_pskel::
  _start_element_impl (const ::xml_schema::ro_string& ns,
                       const ::xml_schema::ro_string& n,
                       const ::xml_schema::ro_string* t)
  {
    XSD_UNUSED (t);

    if (this->::xml_schema::complex_content::_start_element_impl (ns, n, t))
      return true;

    if (n == "Appointment" && ns == "urn://x-artefacts-rosreestr-ru/commons/complex-types/certification-doc/1.0")
    {
      this->::xml_schema::complex_content::context_.top ().parser_ = this->Appointment_parser_;

      if (this->Appointment_parser_)
        this->Appointment_parser_->pre ();

      return true;
    }

    if (n == "FamilyName" && ns == "urn://x-artefacts-smev-gov-ru/supplementary/commons/1.0.1")
    {
      this->::xml_schema::complex_content::context_.top ().parser_ = this->FamilyName_parser_;

      if (this->FamilyName_parser_)
        this->FamilyName_parser_->pre ();

      return true;
    }

    if (n == "FirstName" && ns == "urn://x-artefacts-smev-gov-ru/supplementary/commons/1.0.1")
    {
      this->::xml_schema::complex_content::context_.top ().parser_ = this->FirstName_parser_;

      if (this->FirstName_parser_)
        this->FirstName_parser_->pre ();

      return true;
    }

    if (n == "Patronymic" && ns == "urn://x-artefacts-smev-gov-ru/supplementary/commons/1.0.1")
    {
      this->::xml_schema::complex_content::context_.top ().parser_ = this->Patronymic_parser_;

      if (this->Patronymic_parser_)
        this->Patronymic_parser_->pre ();

      return true;
    }

    return false;
  }

  bool Official_pskel::
  _end_element_impl (const ::xml_schema::ro_string& ns,
                     const ::xml_schema::ro_string& n)
  {
    if (this->::xml_schema::complex_content::_end_element_impl (ns, n))
      return true;

    if (n == "Appointment" && ns == "urn://x-artefacts-rosreestr-ru/commons/complex-types/certification-doc/1.0")
    {
      if (this->Appointment_parser_)
      {
        this->Appointment_parser_->post_s1_255 ();
        this->Appointment ();
      }

      return true;
    }

    if (n == "FamilyName" && ns == "urn://x-artefacts-smev-gov-ru/supplementary/commons/1.0.1")
    {
      if (this->FamilyName_parser_)
      {
        this->FamilyName_parser_->post_rus_100 ();
        this->FamilyName ();
      }

      return true;
    }

    if (n == "FirstName" && ns == "urn://x-artefacts-smev-gov-ru/supplementary/commons/1.0.1")
    {
      if (this->FirstName_parser_)
      {
        this->FirstName_parser_->post_rus_100 ();
        this->FirstName ();
      }

      return true;
    }

    if (n == "Patronymic" && ns == "urn://x-artefacts-smev-gov-ru/supplementary/commons/1.0.1")
    {
      if (this->Patronymic_parser_)
      {
        this->Patronymic_parser_->post_rus_100 ();
        this->Patronymic ();
      }

      return true;
    }

    return false;
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

