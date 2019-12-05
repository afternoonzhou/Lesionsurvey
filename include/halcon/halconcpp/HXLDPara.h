/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 13.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HXLDPARA
#define HCPP_HXLDPARA

namespace HalconCpp
{

// Represents an instance of an XLD parallel object(-array).
class LIntExport HXLDPara : public HXLD
{

public:

  // Create an uninitialized instance
  HXLDPara():HXLD() {}

  // Copy constructor
  HXLDPara(const HXLDPara& source) : HXLD(source) {}

  // Copy constructor
  HXLDPara(const HObject& object);

  // Create HXLDPara from object id. For copy=false takes
  // over management of input key. Type of key must match!
  explicit HXLDPara(Hkey key, bool copy=true);

  // Access of object tuple element
  const HXLDPara operator [] (Hlong index) const;




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Extract parallel XLD polygons enclosing a homogeneous area.
  HXLDModPara ModParallelsXld(const HImage& Image, HXLDExtPara* ExtParallels, const HTuple& Quality, Hlong MinGray, Hlong MaxGray, const HTuple& MaxStandard) const;

  // Extract parallel XLD polygons enclosing a homogeneous area.
  HXLDModPara ModParallelsXld(const HImage& Image, HXLDExtPara* ExtParallels, double Quality, Hlong MinGray, Hlong MaxGray, double MaxStandard) const;

  // Return information about the gray values of the area enclosed by XLD parallels.
  void InfoParallelsXld(const HImage& Image, double* QualityMin, double* QualityMax, Hlong* GrayMin, Hlong* GrayMax, double* StandardMin, double* StandardMax) const;

  // Calculate the difference of two object tuples.
  HXLDPara ObjDiff(const HXLDPara& ObjectsSub) const;

  // Copy an iconic object in the HALCON database.
  HXLDPara CopyObj(Hlong Index, Hlong NumObj) const;

  // Concatenate two iconic object tuples.
  HXLDPara ConcatObj(const HXLDPara& Objects2) const;

  // Select objects from an object tuple.
  HXLDPara SelectObj(const HTuple& Index) const;

  // Select objects from an object tuple.
  HXLDPara SelectObj(Hlong Index) const;

  // Compare iconic objects regarding equality.
  Hlong CompareObj(const HXLDPara& Objects2, const HTuple& Epsilon) const;

  // Compare iconic objects regarding equality.
  Hlong CompareObj(const HXLDPara& Objects2, double Epsilon) const;

  // Compare image objects regarding equality.
  Hlong TestEqualObj(const HXLDPara& Objects2) const;

  // Compute the mapping between the distorted image and the rectified image based upon the points of a regular grid.
  HImage GenGridRectificationMap(const HImage& Image, HXLDPara* Meshes, Hlong GridSpacing, const HTuple& Rotation, const HTuple& Row, const HTuple& Column, const HString& MapType) const;

  // Compute the mapping between the distorted image and the rectified image based upon the points of a regular grid.
  HImage GenGridRectificationMap(const HImage& Image, HXLDPara* Meshes, Hlong GridSpacing, const HString& Rotation, const HTuple& Row, const HTuple& Column, const HString& MapType) const;

  // Compute the mapping between the distorted image and the rectified image based upon the points of a regular grid.
  HImage GenGridRectificationMap(const HImage& Image, HXLDPara* Meshes, Hlong GridSpacing, const char* Rotation, const HTuple& Row, const HTuple& Column, const char* MapType) const;

  // Choose all contours or polygons containing a given point.
  HXLDPara SelectXldPoint(const HTuple& Row, const HTuple& Column) const;

  // Choose all contours or polygons containing a given point.
  HXLDPara SelectXldPoint(double Row, double Column) const;

  // Select contours or polygons using shape features.
  HXLDPara SelectShapeXld(const HTuple& Features, const HString& Operation, const HTuple& Min, const HTuple& Max) const;

  // Select contours or polygons using shape features.
  HXLDPara SelectShapeXld(const HString& Features, const HString& Operation, double Min, double Max) const;

  // Select contours or polygons using shape features.
  HXLDPara SelectShapeXld(const char* Features, const char* Operation, double Min, double Max) const;

  // Transform the shape of contours or polygons.
  HXLDPara ShapeTransXld(const HString& Type) const;

  // Transform the shape of contours or polygons.
  HXLDPara ShapeTransXld(const char* Type) const;

private:

  // Verify matching semantic type ('xld_para')!
  void AssertObjectClass();

};

}

#endif
