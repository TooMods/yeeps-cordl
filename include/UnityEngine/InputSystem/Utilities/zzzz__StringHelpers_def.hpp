#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringHelpers)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
struct StringComparison;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace UnityEngine::InputSystem::Utilities {
class __StringHelpers___Split_d__9;
}
namespace UnityEngine::InputSystem::Utilities {
class __StringHelpers___Tokenize_d__8;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class StringHelpers;
}
namespace UnityEngine::InputSystem::Utilities {
class __StringHelpers___Split_d__9;
}
namespace UnityEngine::InputSystem::Utilities {
class __StringHelpers___Tokenize_d__8;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::StringHelpers);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8);
// Type: ::<Tokenize>d__8
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::StringHelpers::<Tokenize>d__8*
class CORDL_TYPE __StringHelpers___Tokenize_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_Substring__get_Current))::UnityEngine::InputSystem::Utilities::Substring
      System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_Substring__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityEngine::InputSystem::Utilities::Substring __2__current;

  /// @brief Field <>3__str, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___3__str, put = __cordl_internal_set___3__str))::StringW __3__str;

  /// @brief Field <>l__initialThreadId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <endPos>5__3, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__endPos_5__3, put = __cordl_internal_set__endPos_5__3)) int32_t _endPos_5__3;

  /// @brief Field <length>5__2, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__length_5__2, put = __cordl_internal_set__length_5__2)) int32_t _length_5__2;

  /// @brief Field str, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_str, put = __cordl_internal_set_str))::StringW str;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1b3475c, size 0x25c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.Substring>.GetEnumerator, addr 0x1b34a6c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>*
  System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_Substring__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.Substring>.get_Current, addr 0x1b349c4, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::Substring System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_Substring__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1b34b10, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1b349d0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1b34a10, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1b34758, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::InputSystem::Utilities::Substring const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::InputSystem::Utilities::Substring& __cordl_internal_get___2__current();

  constexpr ::StringW const& __cordl_internal_get___3__str() const;

  constexpr ::StringW& __cordl_internal_get___3__str();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__endPos_5__3() const;

  constexpr int32_t& __cordl_internal_get__endPos_5__3();

  constexpr int32_t const& __cordl_internal_get__length_5__2() const;

  constexpr int32_t& __cordl_internal_get__length_5__2();

  constexpr ::StringW const& __cordl_internal_get_str() const;

  constexpr ::StringW& __cordl_internal_get_str();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::InputSystem::Utilities::Substring value);

  constexpr void __cordl_internal_set___3__str(::StringW value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__endPos_5__3(int32_t value);

  constexpr void __cordl_internal_set__length_5__2(int32_t value);

  constexpr void __cordl_internal_set_str(::StringW value);

  /// @brief Method .ctor, addr 0x1b33c58, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__Utilities__Substring_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__Utilities__Substring_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StringHelpers___Tokenize_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StringHelpers___Tokenize_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StringHelpers___Tokenize_d__8(__StringHelpers___Tokenize_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StringHelpers___Tokenize_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StringHelpers___Tokenize_d__8(__StringHelpers___Tokenize_d__8 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::Substring _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field str, offset: 0x30, size: 0x8, def value: None
  ::StringW ___str;

  /// @brief Field <>3__str, offset: 0x38, size: 0x8, def value: None
  ::StringW _____3__str;

  /// @brief Field <length>5__2, offset: 0x40, size: 0x4, def value: None
  int32_t ____length_5__2;

  /// @brief Field <endPos>5__3, offset: 0x44, size: 0x4, def value: None
  int32_t ____endPos_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, ___str) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, _____3__str) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, ____length_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8, ____endPos_5__3) == 0x44, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Type: ::<Split>d__9
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::StringHelpers::<Split>d__9*
class CORDL_TYPE __StringHelpers___Split_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current))::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::StringW __2__current;

  /// @brief Field <>3__predicate, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___3__predicate, put = __cordl_internal_set___3__predicate))::System::Func_2<char16_t, bool>* __3__predicate;

  /// @brief Field <>3__str, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__str, put = __cordl_internal_set___3__str))::StringW __3__str;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <length>5__2, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__length_5__2, put = __cordl_internal_set__length_5__2)) int32_t _length_5__2;

  /// @brief Field <position>5__3, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__position_5__3, put = __cordl_internal_set__position_5__3)) int32_t _position_5__3;

  /// @brief Field predicate, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate))::System::Func_2<char16_t, bool>* predicate;

  /// @brief Field str, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_str, put = __cordl_internal_set_str))::StringW str;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1b34b18, size 0x128, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x1b34c90, size 0xac, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x1b34c40, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1b34d3c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1b34c48, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1b34c88, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1b34b14, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::StringW const& __cordl_internal_get___2__current() const;

  constexpr ::StringW& __cordl_internal_get___2__current();

  constexpr ::System::Func_2<char16_t, bool>*& __cordl_internal_get___3__predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<char16_t, bool>*> const& __cordl_internal_get___3__predicate() const;

  constexpr ::StringW const& __cordl_internal_get___3__str() const;

  constexpr ::StringW& __cordl_internal_get___3__str();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__length_5__2() const;

  constexpr int32_t& __cordl_internal_get__length_5__2();

  constexpr int32_t const& __cordl_internal_get__position_5__3() const;

  constexpr int32_t& __cordl_internal_get__position_5__3();

  constexpr ::System::Func_2<char16_t, bool>*& __cordl_internal_get_predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<char16_t, bool>*> const& __cordl_internal_get_predicate() const;

  constexpr ::StringW const& __cordl_internal_get_str() const;

  constexpr ::StringW& __cordl_internal_get_str();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::StringW value);

  constexpr void __cordl_internal_set___3__predicate(::System::Func_2<char16_t, bool>* value);

  constexpr void __cordl_internal_set___3__str(::StringW value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__length_5__2(int32_t value);

  constexpr void __cordl_internal_set__position_5__3(int32_t value);

  constexpr void __cordl_internal_set_predicate(::System::Func_2<char16_t, bool>* value);

  constexpr void __cordl_internal_set_str(::StringW value);

  /// @brief Method .ctor, addr 0x1b33d14, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StringHelpers___Split_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StringHelpers___Split_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StringHelpers___Split_d__9(__StringHelpers___Split_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StringHelpers___Split_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StringHelpers___Split_d__9(__StringHelpers___Split_d__9 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field str, offset: 0x28, size: 0x8, def value: None
  ::StringW ___str;

  /// @brief Field <>3__str, offset: 0x30, size: 0x8, def value: None
  ::StringW _____3__str;

  /// @brief Field predicate, offset: 0x38, size: 0x8, def value: None
  ::System::Func_2<char16_t, bool>* ___predicate;

  /// @brief Field <>3__predicate, offset: 0x40, size: 0x8, def value: None
  ::System::Func_2<char16_t, bool>* _____3__predicate;

  /// @brief Field <length>5__2, offset: 0x48, size: 0x4, def value: None
  int32_t ____length_5__2;

  /// @brief Field <position>5__3, offset: 0x4c, size: 0x4, def value: None
  int32_t ____position_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, ___str) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, _____3__str) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, ___predicate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, _____3__predicate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, ____length_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9, ____position_5__3) == 0x4c, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::StringHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Utilities::StringHelpers*
class CORDL_TYPE StringHelpers : public ::System::Object {
public:
  // Declarations
  using _Split_d__9 = ::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9;

  using _Tokenize_d__8 = ::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8;

  /// @brief Method CharacterSeparatedListsHaveAtLeastOneCommonElement, addr 0x1b33d48, size 0x29c, virtual false, abstract: false, final false
  static inline bool CharacterSeparatedListsHaveAtLeastOneCommonElement(::StringW firstList, ::StringW secondList, char16_t separator);

  /// @brief Method Contains, addr 0x1b336d4, size 0x20, virtual false, abstract: false, final false
  static inline bool Contains(::StringW str, char16_t ch);

  /// @brief Method Contains, addr 0x1b336f4, size 0x20, virtual false, abstract: false, final false
  static inline bool Contains(::StringW str, ::StringW text, ::System::StringComparison comparison);

  /// @brief Method CountOccurrences, addr 0x1b33b70, size 0x70, virtual false, abstract: false, final false
  static inline int32_t CountOccurrences(::StringW str, char16_t ch);

  /// @brief Method Escape, addr 0x1b3340c, size 0x16c, virtual false, abstract: false, final false
  static inline ::StringW Escape(::StringW str, ::StringW chars, ::StringW replacements);

  /// @brief Method ExpandTemplateString, addr 0x1b34590, size 0x1c8, virtual false, abstract: false, final false
  static inline ::StringW ExpandTemplateString(::StringW _cordl_template, ::System::Func_2<::StringW, ::StringW>* mapFunc);

  /// @brief Method FromNicifiedMemorySize, addr 0x1b339ec, size 0x184, virtual false, abstract: false, final false
  static inline bool FromNicifiedMemorySize(::StringW text, ByRef<int64_t> result, int64_t defaultMultiplier);

  /// @brief Method GetPlural, addr 0x1b33714, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW GetPlural(::StringW str);

  /// @brief Method InvariantEqualsIgnoreCase, addr 0x1b34544, size 0x4c, virtual false, abstract: false, final false
  static inline bool InvariantEqualsIgnoreCase(::StringW left, ::StringW right);

  /// @brief Method IsPrintable, addr 0x1b343c8, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsPrintable(char16_t ch);

  /// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::StringW Join(::StringW separator, ::ArrayW<TValue, ::Array<TValue>*> values);

  /// @brief Method Join, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline ::StringW Join(::System::Collections::Generic::IEnumerable_1<TValue>* values, ::StringW separator);

  /// @brief Method MakeUniqueName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TExisting>
  static inline ::StringW MakeUniqueName(::StringW baseName, ::System::Collections::Generic::IEnumerable_1<TExisting>* existingSet, ::System::Func_2<TExisting, ::StringW>* getNameFunc);

  /// @brief Method NicifyMemorySize, addr 0x1b338bc, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW NicifyMemorySize(int64_t numBytes);

  /// @brief Method ParseInt, addr 0x1b33fe4, size 0x84, virtual false, abstract: false, final false
  static inline int32_t ParseInt(::StringW str, int32_t pos);

  /// @brief Method ReadStringFromBuffer, addr 0x1b34274, size 0x18, virtual false, abstract: false, final false
  static inline ::StringW ReadStringFromBuffer(void* buffer, int32_t bufferSize);

  /// @brief Method ReadStringFromBuffer, addr 0x1b3428c, size 0x13c, virtual false, abstract: false, final false
  static inline ::StringW ReadStringFromBuffer(void* buffer, int32_t bufferSize, ByRef<uint32_t> offset);

  /// @brief Method Split, addr 0x1b33c8c, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Split(::StringW str, ::System::Func_2<char16_t, bool>* predicate);

  /// @brief Method Tokenize, addr 0x1b33be0, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>* Tokenize(::StringW str);

  /// @brief Method Unescape, addr 0x1b33578, size 0x15c, virtual false, abstract: false, final false
  static inline ::StringW Unescape(::StringW str, ::StringW chars, ::StringW replacements);

  /// @brief Method WithAllWhitespaceStripped, addr 0x1b34454, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW WithAllWhitespaceStripped(::StringW str);

  /// @brief Method WriteStringToBuffer, addr 0x1b34068, size 0x1c, virtual false, abstract: false, final false
  static inline bool WriteStringToBuffer(::StringW text, void* buffer, int32_t bufferSizeInCharacters);

  /// @brief Method WriteStringToBuffer, addr 0x1b34084, size 0x1f0, virtual false, abstract: false, final false
  static inline bool WriteStringToBuffer(::StringW text, void* buffer, int32_t bufferSizeInCharacters, ByRef<uint32_t> offset);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringHelpers(StringHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringHelpers(StringHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::StringHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::StringHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::StringHelpers*, "UnityEngine.InputSystem.Utilities", "StringHelpers");
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__StringHelpers___Split_d__9*, "UnityEngine.InputSystem.Utilities", "StringHelpers/<Split>d__9");
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__StringHelpers___Tokenize_d__8*, "UnityEngine.InputSystem.Utilities", "StringHelpers/<Tokenize>d__8");
