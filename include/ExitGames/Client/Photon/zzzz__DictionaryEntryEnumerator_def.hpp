#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DictionaryEntryEnumerator)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct __Dictionary_2__Enumerator;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
struct DictionaryEntryEnumerator;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::DictionaryEntryEnumerator);
// Type: ExitGames.Client.Photon::DictionaryEntryEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: true
// CS Name: ::ExitGames.Client.Photon::DictionaryEntryEnumerator
struct CORDL_TYPE DictionaryEntryEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Collections::DictionaryEntry Current;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::DictionaryEntry>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::DictionaryEntry>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x2774028, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x2773f38, size 0x48, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x2773f80, size 0xa8, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2773da4, size 0x94, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x27735cc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::__Dictionary_2__Enumerator<::System::Object*, ::System::Object*> original);

  /// @brief Method get_Current, addr 0x2773e38, size 0x70, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Current();

  /// @brief Method get_Key, addr 0x2773ea8, size 0x48, virtual false, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x2773ef0, size 0x48, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::DictionaryEntry>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::DictionaryEntry>* i___System__Collections__Generic__IEnumerator_1___System__Collections__DictionaryEntry_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryEntryEnumerator();

  // Ctor Parameters [CppParam { name: "enumerator", ty: "::System::Collections::Generic::__Dictionary_2__Enumerator<::System::Object*,::System::Object*>", modifiers: "", def_value: None }]
  constexpr DictionaryEntryEnumerator(::System::Collections::Generic::__Dictionary_2__Enumerator<::System::Object*, ::System::Object*> enumerator) noexcept;

  /// @brief Field enumerator, offset: 0x0, size: 0x28, def value: None
  ::System::Collections::Generic::__Dictionary_2__Enumerator<::System::Object*, ::System::Object*> enumerator;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::DictionaryEntryEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::DictionaryEntryEnumerator, enumerator) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::DictionaryEntryEnumerator, "ExitGames.Client.Photon", "DictionaryEntryEnumerator");
