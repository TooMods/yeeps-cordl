#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderKeyword)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderKeyword;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderKeyword);
// Type: UnityEngine.Rendering::ShaderKeyword
// SizeInfo { instance_size: 16, native_size: 24, calculated_instance_size: 16, calculated_native_size: 31, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::ShaderKeyword
struct CORDL_TYPE ShaderKeyword {
public:
  // Declarations
  /// @brief Method CreateGlobalKeyword, addr 0x29dc9b0, size 0x3c, virtual false, abstract: false, final false
  static inline void CreateGlobalKeyword(::StringW keyword);

  /// @brief Method GetGlobalKeywordCount, addr 0x29dc94c, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t GetGlobalKeywordCount();

  /// @brief Method GetGlobalKeywordIndex, addr 0x29dc974, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetGlobalKeywordIndex(::StringW keyword);

  /// @brief Method ToString, addr 0x29dcacc, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x29dc9ec, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::StringW keywordName);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderKeyword();

  // Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_IsLocal", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_IsCompute", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_IsValid", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr ShaderKeyword(::StringW m_Name, uint32_t m_Index, bool m_IsLocal, bool m_IsCompute, bool m_IsValid) noexcept;

  /// @brief Field m_Name, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Name;

  /// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
  uint32_t m_Index;

  /// @brief Field m_IsLocal, offset: 0xc, size: 0x1, def value: None
  bool m_IsLocal;

  /// @brief Field m_IsCompute, offset: 0xd, size: 0x1, def value: None
  bool m_IsCompute;

  /// @brief Field m_IsValid, offset: 0xe, size: 0x1, def value: None
  bool m_IsValid;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderKeyword, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderKeyword, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderKeyword, m_Index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderKeyword, m_IsLocal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderKeyword, m_IsCompute) == 0xd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderKeyword, m_IsValid) == 0xe, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderKeyword, "UnityEngine.Rendering", "ShaderKeyword");
