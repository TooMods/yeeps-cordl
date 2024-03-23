#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Internal/zzzz__ScriptableSettingsBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptableSettingsBase_1)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Internal {
template <typename T> class ScriptableSettingsBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities.Internal::ScriptableSettingsBase`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Internal {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities.Internal::ScriptableSettingsBase`1<T>*
class CORDL_TYPE ScriptableSettingsBase_1 : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase {
public:
  // Declarations
  /// @brief Field k_HasCustomPath, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_k_HasCustomPath, put = setStaticF_k_HasCustomPath)) bool k_HasCustomPath;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) T s_Instance;

  /// @brief Method GetFilePath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::StringW GetFilePath();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1<T>* New_ctor();

  /// @brief Method Save, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Save(::StringW savePathFormat);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_k_HasCustomPath();

  static inline T getStaticF_s_Instance();

  static inline void setStaticF_k_HasCustomPath(bool value);

  static inline void setStaticF_s_Instance(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableSettingsBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableSettingsBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableSettingsBase_1(ScriptableSettingsBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableSettingsBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableSettingsBase_1(ScriptableSettingsBase_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::ScriptableSettingsBase_1, "UnityEngine.XR.Interaction.Toolkit.Utilities.Internal",
                                     "ScriptableSettingsBase`1");
