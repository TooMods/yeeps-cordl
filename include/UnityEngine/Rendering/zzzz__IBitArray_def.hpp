#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBitArray)
// Forward declare root types
namespace UnityEngine::Rendering {
class IBitArray;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IBitArray);
// Type: UnityEngine.Rendering::IBitArray
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::IBitArray*
class CORDL_TYPE IBitArray {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  __declspec(property(get = get_allFalse)) bool allFalse;

  __declspec(property(get = get_allTrue)) bool allTrue;

  __declspec(property(get = get_capacity)) uint32_t capacity;

  __declspec(property(get = get_humanizedData))::StringW humanizedData;

  /// @brief Method BitAnd, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* other);

  /// @brief Method BitNot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::IBitArray* BitNot();

  /// @brief Method BitOr, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* other);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_Item(uint32_t index);

  /// @brief Method get_allFalse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_allFalse();

  /// @brief Method get_allTrue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_allTrue();

  /// @brief Method get_capacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint32_t get_capacity();

  /// @brief Method get_humanizedData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_humanizedData();

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Item(uint32_t index, bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IBitArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBitArray(IBitArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBitArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBitArray(IBitArray const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IBitArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IBitArray*, "UnityEngine.Rendering", "IBitArray");
