#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettingsBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptableSettingsBase_1)
// Forward declare root types
namespace Unity::XR::CoreUtils {
template <typename T> class ScriptableSettingsBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::ScriptableSettingsBase_1);
// Type: Unity.XR.CoreUtils::ScriptableSettingsBase`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::ScriptableSettingsBase`1<T>*
class CORDL_TYPE ScriptableSettingsBase_1 : public ::Unity::XR::CoreUtils::ScriptableSettingsBase {
public:
  // Declarations
  /// @brief Field BaseInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BaseInstance, put = setStaticF_BaseInstance)) T BaseInstance;

  /// @brief Field HasCustomPath, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_HasCustomPath, put = setStaticF_HasCustomPath)) bool HasCustomPath;

  /// @brief Method GetFilePath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::StringW GetFilePath();

  static inline ::Unity::XR::CoreUtils::ScriptableSettingsBase_1<T>* New_ctor();

  /// @brief Method Save, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Save(::StringW savePathFormat);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline T getStaticF_BaseInstance();

  static inline bool getStaticF_HasCustomPath();

  static inline void setStaticF_BaseInstance(T value);

  static inline void setStaticF_HasCustomPath(bool value);

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
} // namespace Unity::XR::CoreUtils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::ScriptableSettingsBase_1, "Unity.XR.CoreUtils", "ScriptableSettingsBase`1");
