#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DocumentationInfo)
// Forward declare root types
namespace UnityEngine::Rendering {
class DocumentationInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DocumentationInfo);
// Type: UnityEngine.Rendering::DocumentationInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::DocumentationInfo*
class CORDL_TYPE DocumentationInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetPageLink, addr 0x19fe02c, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW GetPageLink(::StringW packageName, ::StringW pageName);

  static inline ::UnityEngine::Rendering::DocumentationInfo* New_ctor();

  /// @brief Method .ctor, addr 0x19fe0f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_version, addr 0x19fe0b4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DocumentationInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DocumentationInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DocumentationInfo(DocumentationInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DocumentationInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DocumentationInfo(DocumentationInfo const&) = delete;

  /// @brief Field fallbackVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString fallbackVersion{ u"12.1" };

  /// @brief Field url offset 0xffffffff size 0x8
  static constexpr ::ConstString url{ u"https://docs.unity3d.com/Packages/{0}@{1}/manual/{2}.html" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DocumentationInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DocumentationInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DocumentationInfo*, "UnityEngine.Rendering", "DocumentationInfo");
