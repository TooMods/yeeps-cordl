#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortingLayer)
// Forward declare root types
namespace UnityEngine {
struct SortingLayer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SortingLayer);
// Type: UnityEngine::SortingLayer
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::SortingLayer
struct CORDL_TYPE SortingLayer {
public:
  // Declarations
  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_value)) int32_t value;

  /// @brief Method GetLayerValueFromID, addr 0x2a81a70, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetLayerValueFromID(int32_t id);

  /// @brief Method GetSortingLayerIDsInternal, addr 0x2a81b6c, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetSortingLayerIDsInternal();

  /// @brief Method IDToName, addr 0x2a81b94, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW IDToName(int32_t id);

  /// @brief Method get_id, addr 0x2a81a2c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_layers, addr 0x2a81aac, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::SortingLayer, ::Array<::UnityEngine::SortingLayer>*> get_layers();

  /// @brief Method get_value, addr 0x2a81a34, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortingLayer();

  // Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SortingLayer(int32_t m_Id) noexcept;

  /// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
  int32_t m_Id;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SortingLayer, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SortingLayer, m_Id) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SortingLayer, "UnityEngine", "SortingLayer");
