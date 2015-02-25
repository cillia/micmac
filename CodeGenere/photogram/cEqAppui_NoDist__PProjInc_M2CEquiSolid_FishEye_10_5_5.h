// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"


class cEqAppui_NoDist__PProjInc_M2CEquiSolid_FishEye_10_5_5: public cElCompiledFonc
{
   public :

      cEqAppui_NoDist__PProjInc_M2CEquiSolid_FishEye_10_5_5();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetNDP0_x(double);
      void SetNDP0_y(double);
      void SetNDdx_x(double);
      void SetNDdx_y(double);
      void SetNDdy_x(double);
      void SetNDdy_y(double);
      void SetProjI_x(double);
      void SetProjI_y(double);
      void SetProjI_z(double);
      void SetProjJ_x(double);
      void SetProjJ_y(double);
      void SetProjJ_z(double);
      void SetProjK_x(double);
      void SetProjK_y(double);
      void SetProjK_z(double);
      void SetProjP0_x(double);
      void SetProjP0_y(double);
      void SetProjP0_z(double);
      void SetXIm(double);
      void SetYIm(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocNDP0_x;
      double mLocNDP0_y;
      double mLocNDdx_x;
      double mLocNDdx_y;
      double mLocNDdy_x;
      double mLocNDdy_y;
      double mLocProjI_x;
      double mLocProjI_y;
      double mLocProjI_z;
      double mLocProjJ_x;
      double mLocProjJ_y;
      double mLocProjJ_z;
      double mLocProjK_x;
      double mLocProjK_y;
      double mLocProjK_z;
      double mLocProjP0_x;
      double mLocProjP0_y;
      double mLocProjP0_z;
      double mLocXIm;
      double mLocYIm;
};
