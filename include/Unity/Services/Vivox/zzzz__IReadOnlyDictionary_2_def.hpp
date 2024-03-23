#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IReadOnlyDictionary_2)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace Unity::Services::Vivox {
template <typename TK> class KeyEventArg_1;
}
namespace Unity::Services::Vivox {
template <typename TK, typename TV> class ValueEventArg_2;
}
// Forward declare root types
namespace Unity::Services::Vivox {
template <typename TK, typename T> class IReadOnlyDictionary_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::IReadOnlyDictionary_2);
// Type: Unity.Services.Vivox::IReadOnlyDictionary`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// cpp template
template <typename TK, typename T>
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IReadOnlyDictionary`2<TK,T>*
class CORDL_TYPE IReadOnlyDictionary_2 {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) T Item[];

  __declspec(property(get = get_Keys))::System::Collections::Generic::ICollection_1<TK>* Keys;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ContainsKey(TK key);

  /// @brief Method add_AfterKeyAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value);

  /// @brief Method add_AfterValueUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_AfterValueUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, T>*>* value);

  /// @brief Method add_BeforeKeyRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_Item(TK key);

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::ICollection_1<TK>* get_Keys();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method remove_AfterKeyAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_AfterKeyAdded(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value);

  /// @brief Method remove_AfterValueUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_AfterValueUpdated(::System::EventHandler_1<::Unity::Services::Vivox::ValueEventArg_2<TK, T>*>* value);

  /// @brief Method remove_BeforeKeyRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_BeforeKeyRemoved(::System::EventHandler_1<::Unity::Services::Vivox::KeyEventArg_1<TK>*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IReadOnlyDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReadOnlyDictionary_2(IReadOnlyDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReadOnlyDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReadOnlyDictionary_2(IReadOnlyDictionary_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::IReadOnlyDictionary_2, "Unity.Services.Vivox", "IReadOnlyDictionary`2");
