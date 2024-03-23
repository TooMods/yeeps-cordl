#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BaseRegistrationList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SmallRegistrationList_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class SmallRegistrationList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities::SmallRegistrationList`1
// SizeInfo { instance_size: 48, native_size: 41, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities::SmallRegistrationList`1<T>*
class CORDL_TYPE SmallRegistrationList_1 : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T> {
public:
  // Declarations
  __declspec(property(get = get_bufferChanges, put = set_bufferChanges)) bool bufferChanges;

  /// @brief Field m_BufferChanges, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BufferChanges, put = __cordl_internal_set_m_BufferChanges)) bool m_BufferChanges;

  /// @brief Method Flush, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GetRegisteredItemAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetRegisteredItemAt(int32_t index);

  /// @brief Method GetRegisteredItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetRegisteredItems(::System::Collections::Generic::List_1<T>* results);

  /// @brief Method IsRegistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsRegistered(T item);

  /// @brief Method IsStillRegistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsStillRegistered(T item);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>* New_ctor();

  /// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Register(T item);

  /// @brief Method Unregister, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Unregister(T item);

  constexpr bool const& __cordl_internal_get_m_BufferChanges() const;

  constexpr bool& __cordl_internal_get_m_BufferChanges();

  constexpr void __cordl_internal_set_m_BufferChanges(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bufferChanges, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_bufferChanges();

  /// @brief Method set_bufferChanges, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_bufferChanges(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmallRegistrationList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmallRegistrationList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmallRegistrationList_1(SmallRegistrationList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmallRegistrationList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmallRegistrationList_1(SmallRegistrationList_1 const&) = delete;

  /// @brief Field m_BufferChanges, offset: 0x28, size: 0x1, def value: None
  bool ___m_BufferChanges;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1, "UnityEngine.XR.Interaction.Toolkit.Utilities", "SmallRegistrationList`1");
