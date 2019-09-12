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

#include "Polygon-pskel.hxx"

// TMyPolygon_pskel
//

void TMyPolygon_pskel::
Points_parser (::Points_pskel& p)
{
  this->Points_parser_ = &p;
}

void TMyPolygon_pskel::
Parent_Id_parser (::xml_schema::unsigned_byte_pskel& p)
{
  this->Parent_Id_parser_ = &p;
}

void TMyPolygon_pskel::
Definition_parser (::xml_schema::string_pskel& p)
{
  this->Definition_parser_ = &p;
}

void TMyPolygon_pskel::
Layer_id_parser (::xml_schema::unsigned_byte_pskel& p)
{
  this->Layer_id_parser_ = &p;
}

void TMyPolygon_pskel::
Childs_parser (::Childs_pskel& p)
{
  this->Childs_parser_ = &p;
}

void TMyPolygon_pskel::
parsers (::Points_pskel& Points,
         ::xml_schema::unsigned_byte_pskel& Parent_Id,
         ::xml_schema::string_pskel& Definition,
         ::xml_schema::unsigned_byte_pskel& Layer_id,
         ::Childs_pskel& Childs)
{
  this->Points_parser_ = &Points;
  this->Parent_Id_parser_ = &Parent_Id;
  this->Definition_parser_ = &Definition;
  this->Layer_id_parser_ = &Layer_id;
  this->Childs_parser_ = &Childs;
}

TMyPolygon_pskel::
TMyPolygon_pskel ()
: Points_parser_ (0),
  Parent_Id_parser_ (0),
  Definition_parser_ (0),
  Layer_id_parser_ (0),
  Childs_parser_ (0)
{
}

// Points_pskel
//

void Points_pskel::
TmyPointO_parser (::TmyPointO_pskel& p)
{
  this->TmyPointO_parser_ = &p;
}

void Points_pskel::
parsers (::TmyPointO_pskel& TmyPointO)
{
  this->TmyPointO_parser_ = &TmyPointO;
}

Points_pskel::
Points_pskel ()
: TmyPointO_parser_ (0)
{
}

// Childs_pskel
//

void Childs_pskel::
TMyOutLayer_parser (::TMyOutLayer_pskel& p)
{
  this->TMyOutLayer_parser_ = &p;
}

void Childs_pskel::
parsers (::TMyOutLayer_pskel& TMyOutLayer)
{
  this->TMyOutLayer_parser_ = &TMyOutLayer;
}

Childs_pskel::
Childs_pskel ()
: TMyOutLayer_parser_ (0)
{
}

// TmyPointO_pskel
//

void TmyPointO_pskel::
fid_parser (::xml_schema::unsigned_byte_pskel& p)
{
  this->fid_parser_ = &p;
}

void TmyPointO_pskel::
Borderid_parser (::xml_schema::unsigned_byte_pskel& p)
{
  this->Borderid_parser_ = &p;
}

void TmyPointO_pskel::
fStatus_parser (::xml_schema::unsigned_byte_pskel& p)
{
  this->fStatus_parser_ = &p;
}

void TmyPointO_pskel::
NumGeopoint_parser (::xml_schema::unsigned_byte_pskel& p)
{
  this->NumGeopoint_parser_ = &p;
}

void TmyPointO_pskel::
Order_parser (::xml_schema::unsigned_byte_pskel& p)
{
  this->Order_parser_ = &p;
}

void TmyPointO_pskel::
NumGeopointA_parser (::xml_schema::unsigned_short_pskel& p)
{
  this->NumGeopointA_parser_ = &p;
}

void TmyPointO_pskel::
x_parser (::xml_schema::decimal_pskel& p)
{
  this->x_parser_ = &p;
}

void TmyPointO_pskel::
y_parser (::xml_schema::decimal_pskel& p)
{
  this->y_parser_ = &p;
}

void TmyPointO_pskel::
z_parser (::xml_schema::unsigned_byte_pskel& p)
{
  this->z_parser_ = &p;
}

void TmyPointO_pskel::
Mt_parser (::xml_schema::decimal_pskel& p)
{
  this->Mt_parser_ = &p;
}

void TmyPointO_pskel::
id_parser (::xml_schema::unsigned_byte_pskel& p)
{
  this->id_parser_ = &p;
}

void TmyPointO_pskel::
Status_parser (::xml_schema::unsigned_byte_pskel& p)
{
  this->Status_parser_ = &p;
}

void TmyPointO_pskel::
parsers (::xml_schema::unsigned_byte_pskel& fid,
         ::xml_schema::unsigned_byte_pskel& Borderid,
         ::xml_schema::unsigned_byte_pskel& fStatus,
         ::xml_schema::unsigned_byte_pskel& NumGeopoint,
         ::xml_schema::unsigned_byte_pskel& Order,
         ::xml_schema::unsigned_short_pskel& NumGeopointA,
         ::xml_schema::decimal_pskel& x,
         ::xml_schema::decimal_pskel& y,
         ::xml_schema::unsigned_byte_pskel& z,
         ::xml_schema::decimal_pskel& Mt,
         ::xml_schema::unsigned_byte_pskel& id,
         ::xml_schema::unsigned_byte_pskel& Status)
{
  this->fid_parser_ = &fid;
  this->Borderid_parser_ = &Borderid;
  this->fStatus_parser_ = &fStatus;
  this->NumGeopoint_parser_ = &NumGeopoint;
  this->Order_parser_ = &Order;
  this->NumGeopointA_parser_ = &NumGeopointA;
  this->x_parser_ = &x;
  this->y_parser_ = &y;
  this->z_parser_ = &z;
  this->Mt_parser_ = &Mt;
  this->id_parser_ = &id;
  this->Status_parser_ = &Status;
}

TmyPointO_pskel::
TmyPointO_pskel ()
: fid_parser_ (0),
  Borderid_parser_ (0),
  fStatus_parser_ (0),
  NumGeopoint_parser_ (0),
  Order_parser_ (0),
  NumGeopointA_parser_ (0),
  x_parser_ (0),
  y_parser_ (0),
  z_parser_ (0),
  Mt_parser_ (0),
  id_parser_ (0),
  Status_parser_ (0)
{
}

// TMyOutLayer_pskel
//

void TMyOutLayer_pskel::
Points_parser (::Points1_pskel& p)
{
  this->Points_parser_ = &p;
}

void TMyOutLayer_pskel::
Parent_Id_parser (::xml_schema::unsigned_byte_pskel& p)
{
  this->Parent_Id_parser_ = &p;
}

void TMyOutLayer_pskel::
Layer_id_parser (::xml_schema::unsigned_byte_pskel& p)
{
  this->Layer_id_parser_ = &p;
}

void TMyOutLayer_pskel::
parsers (::Points1_pskel& Points,
         ::xml_schema::unsigned_byte_pskel& Parent_Id,
         ::xml_schema::unsigned_byte_pskel& Layer_id)
{
  this->Points_parser_ = &Points;
  this->Parent_Id_parser_ = &Parent_Id;
  this->Layer_id_parser_ = &Layer_id;
}

TMyOutLayer_pskel::
TMyOutLayer_pskel ()
: Points_parser_ (0),
  Parent_Id_parser_ (0),
  Layer_id_parser_ (0)
{
}

// Points1_pskel
//

void Points1_pskel::
TmyPointO_parser (::TmyPointO_pskel& p)
{
  this->TmyPointO_parser_ = &p;
}

void Points1_pskel::
parsers (::TmyPointO_pskel& TmyPointO)
{
  this->TmyPointO_parser_ = &TmyPointO;
}

Points1_pskel::
Points1_pskel ()
: TmyPointO_parser_ (0)
{
}

// TMyPolygon_pskel
//

void TMyPolygon_pskel::
Points ()
{
}

void TMyPolygon_pskel::
Parent_Id (unsigned char)
{
}

void TMyPolygon_pskel::
Definition (const ::std::string&)
{
}

void TMyPolygon_pskel::
Layer_id (unsigned char)
{
}

void TMyPolygon_pskel::
Childs ()
{
}

void TMyPolygon_pskel::
post_TMyPolygon ()
{
}

bool TMyPolygon_pskel::
_start_element_impl (const ::xml_schema::ro_string& ns,
                     const ::xml_schema::ro_string& n,
                     const ::xml_schema::ro_string* t)
{
  XSD_UNUSED (t);

  if (this->::xml_schema::complex_content::_start_element_impl (ns, n, t))
    return true;

  if (n == "Points" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->Points_parser_;

    if (this->Points_parser_)
      this->Points_parser_->pre ();

    return true;
  }

  if (n == "Parent_Id" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->Parent_Id_parser_;

    if (this->Parent_Id_parser_)
      this->Parent_Id_parser_->pre ();

    return true;
  }

  if (n == "Definition" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->Definition_parser_;

    if (this->Definition_parser_)
      this->Definition_parser_->pre ();

    return true;
  }

  if (n == "Layer_id" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->Layer_id_parser_;

    if (this->Layer_id_parser_)
      this->Layer_id_parser_->pre ();

    return true;
  }

  if (n == "Childs" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->Childs_parser_;

    if (this->Childs_parser_)
      this->Childs_parser_->pre ();

    return true;
  }

  return false;
}

bool TMyPolygon_pskel::
_end_element_impl (const ::xml_schema::ro_string& ns,
                   const ::xml_schema::ro_string& n)
{
  if (this->::xml_schema::complex_content::_end_element_impl (ns, n))
    return true;

  if (n == "Points" && ns.empty ())
  {
    if (this->Points_parser_)
    {
      this->Points_parser_->post_Points ();
      this->Points ();
    }

    return true;
  }

  if (n == "Parent_Id" && ns.empty ())
  {
    if (this->Parent_Id_parser_)
      this->Parent_Id (this->Parent_Id_parser_->post_unsigned_byte ());

    return true;
  }

  if (n == "Definition" && ns.empty ())
  {
    if (this->Definition_parser_)
      this->Definition (this->Definition_parser_->post_string ());

    return true;
  }

  if (n == "Layer_id" && ns.empty ())
  {
    if (this->Layer_id_parser_)
      this->Layer_id (this->Layer_id_parser_->post_unsigned_byte ());

    return true;
  }

  if (n == "Childs" && ns.empty ())
  {
    if (this->Childs_parser_)
    {
      this->Childs_parser_->post_Childs ();
      this->Childs ();
    }

    return true;
  }

  return false;
}

// Points_pskel
//

void Points_pskel::
TmyPointO ()
{
}

void Points_pskel::
post_Points ()
{
}

bool Points_pskel::
_start_element_impl (const ::xml_schema::ro_string& ns,
                     const ::xml_schema::ro_string& n,
                     const ::xml_schema::ro_string* t)
{
  XSD_UNUSED (t);

  if (this->::xml_schema::complex_content::_start_element_impl (ns, n, t))
    return true;

  if (n == "TmyPointO" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->TmyPointO_parser_;

    if (this->TmyPointO_parser_)
      this->TmyPointO_parser_->pre ();

    return true;
  }

  return false;
}

bool Points_pskel::
_end_element_impl (const ::xml_schema::ro_string& ns,
                   const ::xml_schema::ro_string& n)
{
  if (this->::xml_schema::complex_content::_end_element_impl (ns, n))
    return true;

  if (n == "TmyPointO" && ns.empty ())
  {
    if (this->TmyPointO_parser_)
    {
      this->TmyPointO_parser_->post_TmyPointO ();
      this->TmyPointO ();
    }

    return true;
  }

  return false;
}

// Childs_pskel
//

void Childs_pskel::
TMyOutLayer ()
{
}

void Childs_pskel::
post_Childs ()
{
}

bool Childs_pskel::
_start_element_impl (const ::xml_schema::ro_string& ns,
                     const ::xml_schema::ro_string& n,
                     const ::xml_schema::ro_string* t)
{
  XSD_UNUSED (t);

  if (this->::xml_schema::complex_content::_start_element_impl (ns, n, t))
    return true;

  if (n == "TMyOutLayer" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->TMyOutLayer_parser_;

    if (this->TMyOutLayer_parser_)
      this->TMyOutLayer_parser_->pre ();

    return true;
  }

  return false;
}

bool Childs_pskel::
_end_element_impl (const ::xml_schema::ro_string& ns,
                   const ::xml_schema::ro_string& n)
{
  if (this->::xml_schema::complex_content::_end_element_impl (ns, n))
    return true;

  if (n == "TMyOutLayer" && ns.empty ())
  {
    if (this->TMyOutLayer_parser_)
    {
      this->TMyOutLayer_parser_->post_TMyOutLayer ();
      this->TMyOutLayer ();
    }

    return true;
  }

  return false;
}

// TmyPointO_pskel
//

void TmyPointO_pskel::
fid (unsigned char)
{
}

void TmyPointO_pskel::
Borderid (unsigned char)
{
}

void TmyPointO_pskel::
fStatus (unsigned char)
{
}

void TmyPointO_pskel::
NumGeopoint (unsigned char)
{
}

void TmyPointO_pskel::
Order (unsigned char)
{
}

void TmyPointO_pskel::
NumGeopointA (unsigned short)
{
}

void TmyPointO_pskel::
x (double)
{
}

void TmyPointO_pskel::
y (double)
{
}

void TmyPointO_pskel::
z (unsigned char)
{
}

void TmyPointO_pskel::
Mt (double)
{
}

void TmyPointO_pskel::
id (unsigned char)
{
}

void TmyPointO_pskel::
Status (unsigned char)
{
}

void TmyPointO_pskel::
post_TmyPointO ()
{
}

bool TmyPointO_pskel::
_start_element_impl (const ::xml_schema::ro_string& ns,
                     const ::xml_schema::ro_string& n,
                     const ::xml_schema::ro_string* t)
{
  XSD_UNUSED (t);

  if (this->::xml_schema::complex_content::_start_element_impl (ns, n, t))
    return true;

  if (n == "fid" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->fid_parser_;

    if (this->fid_parser_)
      this->fid_parser_->pre ();

    return true;
  }

  if (n == "Borderid" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->Borderid_parser_;

    if (this->Borderid_parser_)
      this->Borderid_parser_->pre ();

    return true;
  }

  if (n == "fStatus" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->fStatus_parser_;

    if (this->fStatus_parser_)
      this->fStatus_parser_->pre ();

    return true;
  }

  if (n == "NumGeopoint" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->NumGeopoint_parser_;

    if (this->NumGeopoint_parser_)
      this->NumGeopoint_parser_->pre ();

    return true;
  }

  if (n == "Order" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->Order_parser_;

    if (this->Order_parser_)
      this->Order_parser_->pre ();

    return true;
  }

  if (n == "NumGeopointA" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->NumGeopointA_parser_;

    if (this->NumGeopointA_parser_)
      this->NumGeopointA_parser_->pre ();

    return true;
  }

  if (n == "x" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->x_parser_;

    if (this->x_parser_)
      this->x_parser_->pre ();

    return true;
  }

  if (n == "y" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->y_parser_;

    if (this->y_parser_)
      this->y_parser_->pre ();

    return true;
  }

  if (n == "z" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->z_parser_;

    if (this->z_parser_)
      this->z_parser_->pre ();

    return true;
  }

  if (n == "Mt" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->Mt_parser_;

    if (this->Mt_parser_)
      this->Mt_parser_->pre ();

    return true;
  }

  if (n == "id" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->id_parser_;

    if (this->id_parser_)
      this->id_parser_->pre ();

    return true;
  }

  if (n == "Status" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->Status_parser_;

    if (this->Status_parser_)
      this->Status_parser_->pre ();

    return true;
  }

  return false;
}

bool TmyPointO_pskel::
_end_element_impl (const ::xml_schema::ro_string& ns,
                   const ::xml_schema::ro_string& n)
{
  if (this->::xml_schema::complex_content::_end_element_impl (ns, n))
    return true;

  if (n == "fid" && ns.empty ())
  {
    if (this->fid_parser_)
      this->fid (this->fid_parser_->post_unsigned_byte ());

    return true;
  }

  if (n == "Borderid" && ns.empty ())
  {
    if (this->Borderid_parser_)
      this->Borderid (this->Borderid_parser_->post_unsigned_byte ());

    return true;
  }

  if (n == "fStatus" && ns.empty ())
  {
    if (this->fStatus_parser_)
      this->fStatus (this->fStatus_parser_->post_unsigned_byte ());

    return true;
  }

  if (n == "NumGeopoint" && ns.empty ())
  {
    if (this->NumGeopoint_parser_)
      this->NumGeopoint (this->NumGeopoint_parser_->post_unsigned_byte ());

    return true;
  }

  if (n == "Order" && ns.empty ())
  {
    if (this->Order_parser_)
      this->Order (this->Order_parser_->post_unsigned_byte ());

    return true;
  }

  if (n == "NumGeopointA" && ns.empty ())
  {
    if (this->NumGeopointA_parser_)
      this->NumGeopointA (this->NumGeopointA_parser_->post_unsigned_short ());

    return true;
  }

  if (n == "x" && ns.empty ())
  {
    if (this->x_parser_)
      this->x (this->x_parser_->post_decimal ());

    return true;
  }

  if (n == "y" && ns.empty ())
  {
    if (this->y_parser_)
      this->y (this->y_parser_->post_decimal ());

    return true;
  }

  if (n == "z" && ns.empty ())
  {
    if (this->z_parser_)
      this->z (this->z_parser_->post_unsigned_byte ());

    return true;
  }

  if (n == "Mt" && ns.empty ())
  {
    if (this->Mt_parser_)
      this->Mt (this->Mt_parser_->post_decimal ());

    return true;
  }

  if (n == "id" && ns.empty ())
  {
    if (this->id_parser_)
      this->id (this->id_parser_->post_unsigned_byte ());

    return true;
  }

  if (n == "Status" && ns.empty ())
  {
    if (this->Status_parser_)
      this->Status (this->Status_parser_->post_unsigned_byte ());

    return true;
  }

  return false;
}

// TMyOutLayer_pskel
//

void TMyOutLayer_pskel::
Points ()
{
}

void TMyOutLayer_pskel::
Parent_Id (unsigned char)
{
}

void TMyOutLayer_pskel::
Layer_id (unsigned char)
{
}

void TMyOutLayer_pskel::
post_TMyOutLayer ()
{
}

bool TMyOutLayer_pskel::
_start_element_impl (const ::xml_schema::ro_string& ns,
                     const ::xml_schema::ro_string& n,
                     const ::xml_schema::ro_string* t)
{
  XSD_UNUSED (t);

  if (this->::xml_schema::complex_content::_start_element_impl (ns, n, t))
    return true;

  if (n == "Points" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->Points_parser_;

    if (this->Points_parser_)
      this->Points_parser_->pre ();

    return true;
  }

  if (n == "Parent_Id" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->Parent_Id_parser_;

    if (this->Parent_Id_parser_)
      this->Parent_Id_parser_->pre ();

    return true;
  }

  if (n == "Layer_id" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->Layer_id_parser_;

    if (this->Layer_id_parser_)
      this->Layer_id_parser_->pre ();

    return true;
  }

  return false;
}

bool TMyOutLayer_pskel::
_end_element_impl (const ::xml_schema::ro_string& ns,
                   const ::xml_schema::ro_string& n)
{
  if (this->::xml_schema::complex_content::_end_element_impl (ns, n))
    return true;

  if (n == "Points" && ns.empty ())
  {
    if (this->Points_parser_)
    {
      this->Points_parser_->post_Points1 ();
      this->Points ();
    }

    return true;
  }

  if (n == "Parent_Id" && ns.empty ())
  {
    if (this->Parent_Id_parser_)
      this->Parent_Id (this->Parent_Id_parser_->post_unsigned_byte ());

    return true;
  }

  if (n == "Layer_id" && ns.empty ())
  {
    if (this->Layer_id_parser_)
      this->Layer_id (this->Layer_id_parser_->post_unsigned_byte ());

    return true;
  }

  return false;
}

// Points1_pskel
//

void Points1_pskel::
TmyPointO ()
{
}

void Points1_pskel::
post_Points1 ()
{
}

bool Points1_pskel::
_start_element_impl (const ::xml_schema::ro_string& ns,
                     const ::xml_schema::ro_string& n,
                     const ::xml_schema::ro_string* t)
{
  XSD_UNUSED (t);

  if (this->::xml_schema::complex_content::_start_element_impl (ns, n, t))
    return true;

  if (n == "TmyPointO" && ns.empty ())
  {
    this->::xml_schema::complex_content::context_.top ().parser_ = this->TmyPointO_parser_;

    if (this->TmyPointO_parser_)
      this->TmyPointO_parser_->pre ();

    return true;
  }

  return false;
}

bool Points1_pskel::
_end_element_impl (const ::xml_schema::ro_string& ns,
                   const ::xml_schema::ro_string& n)
{
  if (this->::xml_schema::complex_content::_end_element_impl (ns, n))
    return true;

  if (n == "TmyPointO" && ns.empty ())
  {
    if (this->TmyPointO_parser_)
    {
      this->TmyPointO_parser_->post_TmyPointO ();
      this->TmyPointO ();
    }

    return true;
  }

  return false;
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

