#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntegratedSubsystemDescriptor)
namespace UnityEngine {
class ISubsystemDescriptor;
}
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
class IntegratedSubsystemDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::IntegratedSubsystemDescriptor);
// Type: UnityEngine::IntegratedSubsystemDescriptor
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::IntegratedSubsystemDescriptor*
class CORDL_TYPE IntegratedSubsystemDescriptor : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_id))::StringW id;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  /// @brief Convert operator to "::UnityEngine::ISubsystemDescriptor"
  constexpr operator ::UnityEngine::ISubsystemDescriptor*() noexcept;

  /// @brief Method CreateImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::ISubsystem* CreateImpl();

  static inline ::UnityEngine::IntegratedSubsystemDescriptor* New_ctor();

  /// @brief Method UnityEngine.ISubsystemDescriptor.Create, addr 0x27c7758, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::ISubsystem* UnityEngine_ISubsystemDescriptor_Create();

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method .ctor, addr 0x27c7764, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0x27c76e0, size 0x3c, virtual true, abstract: false, final true
  inline ::StringW get_id();

  /// @brief Convert to "::UnityEngine::ISubsystemDescriptor"
  constexpr ::UnityEngine::ISubsystemDescriptor* i___UnityEngine__ISubsystemDescriptor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegratedSubsystemDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegratedSubsystemDescriptor(IntegratedSubsystemDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegratedSubsystemDescriptor(IntegratedSubsystemDescriptor const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegratedSubsystemDescriptor, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::IntegratedSubsystemDescriptor, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::IntegratedSubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegratedSubsystemDescriptor*, "UnityEngine", "IntegratedSubsystemDescriptor");
