#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CameraTypeUtility)
namespace UnityEngine::Rendering::Universal {
struct CameraRenderType;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class CameraTypeUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::CameraTypeUtility);
// Type: UnityEngine.Rendering.Universal::CameraTypeUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::CameraTypeUtility*
class CORDL_TYPE CameraTypeUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_CameraTypeNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CameraTypeNames, put = setStaticF_s_CameraTypeNames))::ArrayW<::StringW, ::Array<::StringW>*> s_CameraTypeNames;

  /// @brief Method GetName, addr 0x2733bcc, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW GetName(::UnityEngine::Rendering::Universal::CameraRenderType type);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_CameraTypeNames();

  static inline void setStaticF_s_CameraTypeNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraTypeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraTypeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraTypeUtility(CameraTypeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraTypeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraTypeUtility(CameraTypeUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CameraTypeUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::CameraTypeUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CameraTypeUtility*, "UnityEngine.Rendering.Universal", "CameraTypeUtility");
