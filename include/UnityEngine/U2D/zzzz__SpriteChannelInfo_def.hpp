#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteChannelInfo)
// Forward declare root types
namespace UnityEngine::U2D {
struct SpriteChannelInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::U2D::SpriteChannelInfo);
// Type: UnityEngine.U2D::SpriteChannelInfo
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::U2D {
// Is value type: true
// CS Name: ::UnityEngine.U2D::SpriteChannelInfo
struct CORDL_TYPE SpriteChannelInfo {
public:
  // Declarations
  __declspec(property(get = get_buffer))::cordl_internals::Ptr<void> buffer;

  __declspec(property(get = get_count)) int32_t count;

  __declspec(property(get = get_offset)) int32_t offset;

  __declspec(property(get = get_stride)) int32_t stride;

  /// @brief Method get_buffer, addr 0x2a86fec, size 0xc, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> get_buffer();

  /// @brief Method get_count, addr 0x2a86ff8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_offset, addr 0x2a87000, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_offset();

  /// @brief Method get_stride, addr 0x2a87008, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stride();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteChannelInfo();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SpriteChannelInfo(void* m_Buffer, int32_t m_Count, int32_t m_Offset, int32_t m_Stride) noexcept;

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  void* m_Buffer;

  /// @brief Field m_Count, offset: 0x8, size: 0x4, def value: None
  int32_t m_Count;

  /// @brief Field m_Offset, offset: 0xc, size: 0x4, def value: None
  int32_t m_Offset;

  /// @brief Field m_Stride, offset: 0x10, size: 0x4, def value: None
  int32_t m_Stride;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::U2D::SpriteChannelInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::U2D::SpriteChannelInfo, m_Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::U2D::SpriteChannelInfo, m_Count) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::U2D::SpriteChannelInfo, m_Offset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::U2D::SpriteChannelInfo, m_Stride) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::U2D
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteChannelInfo, "UnityEngine.U2D", "SpriteChannelInfo");
