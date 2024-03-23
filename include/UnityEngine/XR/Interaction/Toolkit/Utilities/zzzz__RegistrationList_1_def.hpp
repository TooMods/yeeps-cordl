#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BaseRegistrationList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegistrationList_1)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template <typename T> class RegistrationList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities::RegistrationList`1
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities::RegistrationList`1<T>*
class CORDL_TYPE RegistrationList_1 : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T> {
public:
  // Declarations
  /// @brief Field m_UnorderedBufferedAdd, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnorderedBufferedAdd, put = __cordl_internal_set_m_UnorderedBufferedAdd))::System::Collections::Generic::HashSet_1<T>* m_UnorderedBufferedAdd;

  /// @brief Field m_UnorderedBufferedRemove, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnorderedBufferedRemove,
                      put = __cordl_internal_set_m_UnorderedBufferedRemove))::System::Collections::Generic::HashSet_1<T>* m_UnorderedBufferedRemove;

  /// @brief Field m_UnorderedRegisteredItems, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnorderedRegisteredItems,
                      put = __cordl_internal_set_m_UnorderedRegisteredItems))::System::Collections::Generic::HashSet_1<T>* m_UnorderedRegisteredItems;

  /// @brief Field m_UnorderedRegisteredSnapshot, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnorderedRegisteredSnapshot,
                      put = __cordl_internal_set_m_UnorderedRegisteredSnapshot))::System::Collections::Generic::HashSet_1<T>* m_UnorderedRegisteredSnapshot;

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

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>* New_ctor();

  /// @brief Method OnItemMovedImmediately, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnItemMovedImmediately(T item, int32_t newIndex);

  /// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Register(T item);

  /// @brief Method Unregister, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Unregister(T item);

  constexpr ::System::Collections::Generic::HashSet_1<T>*& __cordl_internal_get_m_UnorderedBufferedAdd();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const& __cordl_internal_get_m_UnorderedBufferedAdd() const;

  constexpr ::System::Collections::Generic::HashSet_1<T>*& __cordl_internal_get_m_UnorderedBufferedRemove();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const& __cordl_internal_get_m_UnorderedBufferedRemove() const;

  constexpr ::System::Collections::Generic::HashSet_1<T>*& __cordl_internal_get_m_UnorderedRegisteredItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const& __cordl_internal_get_m_UnorderedRegisteredItems() const;

  constexpr ::System::Collections::Generic::HashSet_1<T>*& __cordl_internal_get_m_UnorderedRegisteredSnapshot();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<T>*> const& __cordl_internal_get_m_UnorderedRegisteredSnapshot() const;

  constexpr void __cordl_internal_set_m_UnorderedBufferedAdd(::System::Collections::Generic::HashSet_1<T>* value);

  constexpr void __cordl_internal_set_m_UnorderedBufferedRemove(::System::Collections::Generic::HashSet_1<T>* value);

  constexpr void __cordl_internal_set_m_UnorderedRegisteredItems(::System::Collections::Generic::HashSet_1<T>* value);

  constexpr void __cordl_internal_set_m_UnorderedRegisteredSnapshot(::System::Collections::Generic::HashSet_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegistrationList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegistrationList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegistrationList_1(RegistrationList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegistrationList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegistrationList_1(RegistrationList_1 const&) = delete;

  /// @brief Field m_UnorderedBufferedAdd, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* ___m_UnorderedBufferedAdd;

  /// @brief Field m_UnorderedBufferedRemove, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* ___m_UnorderedBufferedRemove;

  /// @brief Field m_UnorderedRegisteredSnapshot, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* ___m_UnorderedRegisteredSnapshot;

  /// @brief Field m_UnorderedRegisteredItems, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* ___m_UnorderedRegisteredItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1, "UnityEngine.XR.Interaction.Toolkit.Utilities", "RegistrationList`1");
