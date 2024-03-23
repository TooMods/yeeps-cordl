#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__Converter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DictionaryConverterV1)
namespace Amazon::DynamoDBv2::DocumentModel {
class Document;
}
namespace Amazon::DynamoDBv2 {
class __DictionaryConverterV1___GetTargetTypes_d__0;
}
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
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class DictionaryConverterV1;
}
namespace Amazon::DynamoDBv2 {
class __DictionaryConverterV1___GetTargetTypes_d__0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::DictionaryConverterV1);
MARK_REF_PTR_T(::Amazon::DynamoDBv2::__DictionaryConverterV1___GetTargetTypes_d__0);
// Type: ::<GetTargetTypes>d__0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::DictionaryConverterV1::<GetTargetTypes>d__0*
class CORDL_TYPE __DictionaryConverterV1___GetTargetTypes_d__0 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Type__get_Current))::System::Type* System_Collections_Generic_IEnumerator_System_Type__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Type* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x120e614, size 0xa8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::DynamoDBv2::__DictionaryConverterV1___GetTargetTypes_d__0* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x120e70c, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x120e6bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x120e7a4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x120e6c4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x120e704, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x120e610, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Type*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get___2__current() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Type* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method .ctor, addr 0x120e21c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DictionaryConverterV1___GetTargetTypes_d__0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DictionaryConverterV1___GetTargetTypes_d__0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DictionaryConverterV1___GetTargetTypes_d__0(__DictionaryConverterV1___GetTargetTypes_d__0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DictionaryConverterV1___GetTargetTypes_d__0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DictionaryConverterV1___GetTargetTypes_d__0(__DictionaryConverterV1___GetTargetTypes_d__0 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Type* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::__DictionaryConverterV1___GetTargetTypes_d__0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DictionaryConverterV1___GetTargetTypes_d__0, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DictionaryConverterV1___GetTargetTypes_d__0, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::__DictionaryConverterV1___GetTargetTypes_d__0, _____l__initialThreadId) == 0x20, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2
// Type: Amazon.DynamoDBv2::DictionaryConverterV1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::DictionaryConverterV1*
class CORDL_TYPE DictionaryConverterV1 : public ::Amazon::DynamoDBv2::Converter {
public:
  // Declarations
  using _GetTargetTypes_d__0 = ::Amazon::DynamoDBv2::__DictionaryConverterV1___GetTargetTypes_d__0;

  /// @brief Method GetTargetTypes, addr 0x120e1ac, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetTargetTypes();

  static inline ::Amazon::DynamoDBv2::DictionaryConverterV1* New_ctor();

  /// @brief Method TryTo, addr 0x120e250, size 0x3b8, virtual true, abstract: false, final false
  inline bool TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Document*> d);

  /// @brief Method .ctor, addr 0x120e608, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryConverterV1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryConverterV1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryConverterV1(DictionaryConverterV1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryConverterV1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryConverterV1(DictionaryConverterV1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::DictionaryConverterV1, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::DictionaryConverterV1);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::DictionaryConverterV1*, "Amazon.DynamoDBv2", "DictionaryConverterV1");
NEED_NO_BOX(::Amazon::DynamoDBv2::__DictionaryConverterV1___GetTargetTypes_d__0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::__DictionaryConverterV1___GetTargetTypes_d__0*, "Amazon.DynamoDBv2", "DictionaryConverterV1/<GetTargetTypes>d__0");
