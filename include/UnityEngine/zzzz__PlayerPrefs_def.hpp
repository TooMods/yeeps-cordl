#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPrefs)
// Forward declare root types
namespace UnityEngine {
class PlayerPrefs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PlayerPrefs);
// Type: UnityEngine::PlayerPrefs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::PlayerPrefs*
class CORDL_TYPE PlayerPrefs : public ::System::Object {
public:
  // Declarations
  /// @brief Method DeleteKey, addr 0x27e213c, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteKey(::StringW key);

  /// @brief Method GetInt, addr 0x27e1fb4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetInt(::StringW key, int32_t defaultValue);

  /// @brief Method GetString, addr 0x27e20d0, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW key);

  /// @brief Method GetString, addr 0x27e208c, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW key, ::StringW defaultValue);

  /// @brief Method Save, addr 0x27e2178, size 0x28, virtual false, abstract: false, final false
  static inline void Save();

  /// @brief Method SetInt, addr 0x27e1f20, size 0x94, virtual false, abstract: false, final false
  static inline void SetInt(::StringW key, int32_t value);

  /// @brief Method SetString, addr 0x27e1ff8, size 0x94, virtual false, abstract: false, final false
  static inline void SetString(::StringW key, ::StringW value);

  /// @brief Method TrySetInt, addr 0x27e1e98, size 0x44, virtual false, abstract: false, final false
  static inline bool TrySetInt(::StringW key, int32_t value);

  /// @brief Method TrySetSetString, addr 0x27e1edc, size 0x44, virtual false, abstract: false, final false
  static inline bool TrySetSetString(::StringW key, ::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerPrefs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerPrefs(PlayerPrefs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerPrefs(PlayerPrefs const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerPrefs, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PlayerPrefs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerPrefs*, "UnityEngine", "PlayerPrefs");
