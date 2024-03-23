#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalEntityIndexer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace UnityEngine::Rendering::Universal {
struct DecalEntity;
}
namespace UnityEngine::Rendering::Universal {
struct __DecalEntityIndexer__DecalEntityItem;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalEntityIndexer;
}
namespace UnityEngine::Rendering::Universal {
struct __DecalEntityIndexer__DecalEntityItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalEntityIndexer);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem);
// Type: ::DecalEntityItem
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::DecalEntityIndexer::DecalEntityItem
struct CORDL_TYPE __DecalEntityIndexer__DecalEntityItem {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DecalEntityIndexer__DecalEntityItem();

  // Ctor Parameters [CppParam { name: "chunkIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "arrayIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "version", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DecalEntityIndexer__DecalEntityItem(int32_t chunkIndex, int32_t arrayIndex, int32_t version) noexcept;

  /// @brief Field chunkIndex, offset: 0x0, size: 0x4, def value: None
  int32_t chunkIndex;

  /// @brief Field arrayIndex, offset: 0x4, size: 0x4, def value: None
  int32_t arrayIndex;

  /// @brief Field version, offset: 0x8, size: 0x4, def value: None
  int32_t version;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem, chunkIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem, arrayIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem, version) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::DecalEntityIndexer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DecalEntityIndexer*
class CORDL_TYPE DecalEntityIndexer : public ::System::Object {
public:
  // Declarations
  using DecalEntityItem = ::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem;

  /// @brief Field m_Entities, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Entities,
                      put = __cordl_internal_set_m_Entities))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem>* m_Entities;

  /// @brief Field m_FreeIndices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeIndices, put = __cordl_internal_set_m_FreeIndices))::System::Collections::Generic::Queue_1<int32_t>* m_FreeIndices;

  /// @brief Method Clear, addr 0x2c69fa4, size 0x70, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateDecalEntity, addr 0x2c69b5c, size 0x188, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalEntity CreateDecalEntity(int32_t arrayIndex, int32_t chunkIndex);

  /// @brief Method DestroyDecalEntity, addr 0x2c69ce4, size 0xb0, virtual false, abstract: false, final false
  inline void DestroyDecalEntity(::UnityEngine::Rendering::Universal::DecalEntity decalEntity);

  /// @brief Method GetItem, addr 0x2c69d94, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem GetItem(::UnityEngine::Rendering::Universal::DecalEntity decalEntity);

  /// @brief Method IsValid, addr 0x2c69ad4, size 0x88, virtual false, abstract: false, final false
  inline bool IsValid(::UnityEngine::Rendering::Universal::DecalEntity decalEntity);

  static inline ::UnityEngine::Rendering::Universal::DecalEntityIndexer* New_ctor();

  /// @brief Method RemapChunkIndices, addr 0x2c69e90, size 0x114, virtual false, abstract: false, final false
  inline void RemapChunkIndices(::System::Collections::Generic::List_1<int32_t>* remaper);

  /// @brief Method UpdateIndex, addr 0x2c69df4, size 0x9c, virtual false, abstract: false, final false
  inline void UpdateIndex(::UnityEngine::Rendering::Universal::DecalEntity decalEntity, int32_t newArrayIndex);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem>*& __cordl_internal_get_m_Entities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem>*> const&
  __cordl_internal_get_m_Entities() const;

  constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get_m_FreeIndices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<int32_t>*> const& __cordl_internal_get_m_FreeIndices() const;

  constexpr void __cordl_internal_set_m_Entities(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem>* value);

  constexpr void __cordl_internal_set_m_FreeIndices(::System::Collections::Generic::Queue_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x2c6a014, size 0x10c0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalEntityIndexer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalEntityIndexer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalEntityIndexer(DecalEntityIndexer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalEntityIndexer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalEntityIndexer(DecalEntityIndexer const&) = delete;

  /// @brief Field m_Entities, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem>* ___m_Entities;

  /// @brief Field m_FreeIndices, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<int32_t>* ___m_FreeIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalEntityIndexer, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityIndexer, ___m_Entities) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityIndexer, ___m_FreeIndices) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalEntityIndexer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalEntityIndexer*, "UnityEngine.Rendering.Universal", "DecalEntityIndexer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__DecalEntityIndexer__DecalEntityItem, "UnityEngine.Rendering.Universal", "DecalEntityIndexer/DecalEntityItem");
