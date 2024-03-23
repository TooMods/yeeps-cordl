#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UndoBlock)
namespace System {
class IDisposable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class UndoBlock;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::UndoBlock);
// Type: Unity.XR.CoreUtils::UndoBlock
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 21, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::UndoBlock*
class CORDL_TYPE UndoBlock : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_DisposedValue, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisposedValue, put = __cordl_internal_set_m_DisposedValue)) bool m_DisposedValue;

  /// @brief Field m_UndoGroup, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UndoGroup, put = __cordl_internal_set_m_UndoGroup)) int32_t m_UndoGroup;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T AddComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method Dispose, addr 0x287f6c0, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x287f6a8, size 0x18, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::Unity::XR::CoreUtils::UndoBlock* New_ctor(::StringW undoLabel, bool testMode);

  /// @brief Method RecordObject, addr 0x287f688, size 0x4, virtual false, abstract: false, final false
  inline void RecordObject(::UnityEngine::Object* objectToUndo);

  /// @brief Method RegisterCreatedObject, addr 0x287f684, size 0x4, virtual false, abstract: false, final false
  inline void RegisterCreatedObject(::UnityEngine::Object* objectToUndo);

  /// @brief Method SetTransformParent, addr 0x287f68c, size 0x1c, virtual false, abstract: false, final false
  inline void SetTransformParent(::UnityEngine::Transform* transform, ::UnityEngine::Transform* newParent);

  constexpr bool const& __cordl_internal_get_m_DisposedValue() const;

  constexpr bool& __cordl_internal_get_m_DisposedValue();

  constexpr int32_t const& __cordl_internal_get_m_UndoGroup() const;

  constexpr int32_t& __cordl_internal_get_m_UndoGroup();

  constexpr void __cordl_internal_set_m_DisposedValue(bool value);

  constexpr void __cordl_internal_set_m_UndoGroup(int32_t value);

  /// @brief Method .ctor, addr 0x287f664, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW undoLabel, bool testMode);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UndoBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UndoBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UndoBlock(UndoBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UndoBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UndoBlock(UndoBlock const&) = delete;

  /// @brief Field m_UndoGroup, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_UndoGroup;

  /// @brief Field m_DisposedValue, offset: 0x14, size: 0x1, def value: None
  bool ___m_DisposedValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::UndoBlock, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::UndoBlock, ___m_UndoGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::UndoBlock, ___m_DisposedValue) == 0x14, "Offset mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::UndoBlock);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::UndoBlock*, "Unity.XR.CoreUtils", "UndoBlock");
