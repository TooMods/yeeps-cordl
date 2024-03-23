#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettingsBase_1_def.hpp"
CORDL_MODULE_EXPORT(ScriptableSettings_1)
// Forward declare root types
namespace Unity::XR::CoreUtils {
template <typename T> class ScriptableSettings_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::ScriptableSettings_1);
// Type: Unity.XR.CoreUtils::ScriptableSettings`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::ScriptableSettings`1<T>*
class CORDL_TYPE ScriptableSettings_1 : public ::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T> {
public:
  // Declarations
  /// @brief Method CreateAndLoad, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T CreateAndLoad();

  static inline ::Unity::XR::CoreUtils::ScriptableSettings_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T get_Instance();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableSettings_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableSettings_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableSettings_1(ScriptableSettings_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableSettings_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableSettings_1(ScriptableSettings_1 const&) = delete;

  /// @brief Field k_CustomSavePathFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString k_CustomSavePathFormat{ u"{0}Resources/{1}.asset" };

  /// @brief Field k_LoadPathFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LoadPathFormat{ u"ScriptableSettings/{0}" };

  /// @brief Field k_SavePathFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SavePathFormat{ u"{0}Resources/ScriptableSettings/{1}.asset" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::ScriptableSettings_1, "Unity.XR.CoreUtils", "ScriptableSettings`1");
