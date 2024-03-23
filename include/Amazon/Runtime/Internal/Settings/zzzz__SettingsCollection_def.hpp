#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsCollection)
namespace Amazon::Runtime::Internal::Settings {
class __SettingsCollection__ObjectSettings;
}
namespace Amazon::Runtime::Internal::Settings {
class __SettingsCollection___GetEnumerator_d__11;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
namespace System::IO {
class StreamWriter;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace ThirdParty::Json::LitJson {
class JsonWriter;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Settings {
class SettingsCollection;
}
namespace Amazon::Runtime::Internal::Settings {
class __SettingsCollection__ObjectSettings;
}
namespace Amazon::Runtime::Internal::Settings {
class __SettingsCollection___GetEnumerator_d__11;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Settings::SettingsCollection);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11);
// Type: ::ObjectSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: false
// CS Name: ::SettingsCollection::ObjectSettings*
class CORDL_TYPE __SettingsCollection__ObjectSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item, put = set_Item))::StringW Item[];

  __declspec(property(get = get_Keys))::System::Collections::Generic::IEnumerable_1<::StringW>* Keys;

  __declspec(property(get = get_UniqueKey))::StringW UniqueKey;

  /// @brief Field _uniqueKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__uniqueKey, put = __cordl_internal_set__uniqueKey))::StringW _uniqueKey;

  /// @brief Field _values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* _values;

  /// @brief Method Clear, addr 0x2453268, size 0x50, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetValueOrDefault, addr 0x24531f4, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetValueOrDefault(::StringW key, ::StringW defaultValue);

  static inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* New_ctor(::StringW uniqueKey,
                                                                                                      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* values);

  /// @brief Method Remove, addr 0x2453210, size 0x58, virtual false, abstract: false, final false
  inline void Remove(::StringW key);

  /// @brief Method WriteToJson, addr 0x2452d1c, size 0x250, virtual false, abstract: false, final false
  inline void WriteToJson(::ThirdParty::Json::LitJson::JsonWriter* writer);

  constexpr ::StringW const& __cordl_internal_get__uniqueKey() const;

  constexpr ::StringW& __cordl_internal_get__uniqueKey();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get__values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> const& __cordl_internal_get__values() const;

  constexpr void __cordl_internal_set__uniqueKey(::StringW value);

  constexpr void __cordl_internal_set__values(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x24530dc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW uniqueKey, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* values);

  /// @brief Method get_IsEmpty, addr 0x24532b8, size 0x60, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x24517b8, size 0xa0, virtual false, abstract: false, final false
  inline ::StringW get_Item(::StringW key);

  /// @brief Method get_Keys, addr 0x2453318, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_Keys();

  /// @brief Method get_UniqueKey, addr 0x24531ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UniqueKey();

  /// @brief Method set_Item, addr 0x24518e0, size 0x68, virtual false, abstract: false, final false
  inline void set_Item(::StringW key, ::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsCollection__ObjectSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsCollection__ObjectSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsCollection__ObjectSettings(__SettingsCollection__ObjectSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsCollection__ObjectSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsCollection__ObjectSettings(__SettingsCollection__ObjectSettings const&) = delete;

  /// @brief Field _uniqueKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ____uniqueKey;

  /// @brief Field _values, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings, ____uniqueKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings, ____values) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Settings
// Type: ::<GetEnumerator>d__11
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: false
// CS Name: ::SettingsCollection::<GetEnumerator>d__11*
class CORDL_TYPE __SettingsCollection___GetEnumerator_d__11 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Amazon_Runtime_Internal_Settings_SettingsCollection_ObjectSettings__get_Current))::Amazon::Runtime::Internal::Settings::
      __SettingsCollection__ObjectSettings* System_Collections_Generic_IEnumerator_Amazon_Runtime_Internal_Settings_SettingsCollection_ObjectSettings__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Amazon::Runtime::Internal::Settings::SettingsCollection* __4__this;

  /// @brief Field <>7__wrap1, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<
      ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> __7__wrap1;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2453800, size 0x1dc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<Amazon.Runtime.Internal.Settings.SettingsCollection.ObjectSettings>.get_Current, addr 0x2453a2c, size 0x8, virtual true, abstract: false,
  /// final true
  inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*
  System_Collections_Generic_IEnumerator_Amazon_Runtime_Internal_Settings_SettingsCollection_ObjectSettings__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2453a34, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2453a74, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x24537e4, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*> const& __cordl_internal_get___2__current() const;

  constexpr ::Amazon::Runtime::Internal::Settings::SettingsCollection*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Settings::SettingsCollection*> const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> const&
  __cordl_internal_get___7__wrap1() const;

  constexpr ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>& __cordl_internal_get___7__wrap1();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* value);

  constexpr void __cordl_internal_set___4__this(::Amazon::Runtime::Internal::Settings::SettingsCollection* value);

  constexpr void
  __cordl_internal_set___7__wrap1(::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> value);

  /// @brief Method <>m__Finally1, addr 0x24539dc, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x2452fd8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*
  i___System__Collections__Generic__IEnumerator_1___Amazon__Runtime__Internal__Settings____SettingsCollection__ObjectSettings__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsCollection___GetEnumerator_d__11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsCollection___GetEnumerator_d__11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsCollection___GetEnumerator_d__11(__SettingsCollection___GetEnumerator_d__11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsCollection___GetEnumerator_d__11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsCollection___GetEnumerator_d__11(__SettingsCollection___GetEnumerator_d__11 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Settings::SettingsCollection* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11, _____7__wrap1) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Settings
// Type: Amazon.Runtime.Internal.Settings::SettingsCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Settings::SettingsCollection*
class CORDL_TYPE SettingsCollection : public ::System::Object {
public:
  // Declarations
  using ObjectSettings = ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings;

  using _GetEnumerator_d__11 = ::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_InitializedEmpty, put = set_InitializedEmpty)) bool InitializedEmpty;

  __declspec(property(get = get_Item))::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* Item[];

  /// @brief Field <InitializedEmpty>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__InitializedEmpty_k__BackingField, put = __cordl_internal_set__InitializedEmpty_k__BackingField)) bool _InitializedEmpty_k__BackingField;

  /// @brief Field _values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__values,
                      put = __cordl_internal_set__values))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>* _values;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Clear, addr 0x245319c, size 0x50, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetEnumerator, addr 0x2452f70, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>* GetEnumerator();

  /// @brief Method NewObjectSettings, addr 0x2453108, size 0x3c, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* NewObjectSettings();

  /// @brief Method NewObjectSettings, addr 0x2453000, size 0xdc, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* NewObjectSettings(::StringW uniqueKey);

  static inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* New_ctor();

  static inline ::Amazon::Runtime::Internal::Settings::SettingsCollection*
  New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>* values);

  /// @brief Method Persist, addr 0x2451db0, size 0x214, virtual false, abstract: false, final false
  inline void Persist(::System::IO::StreamWriter* writer);

  /// @brief Method Remove, addr 0x2453144, size 0x58, virtual false, abstract: false, final false
  inline void Remove(::StringW uniqueKey);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2452f6c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr bool const& __cordl_internal_get__InitializedEmpty_k__BackingField() const;

  constexpr bool& __cordl_internal_get__InitializedEmpty_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>*& __cordl_internal_get__values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>*> const&
  __cordl_internal_get__values() const;

  constexpr void __cordl_internal_set__InitializedEmpty_k__BackingField(bool value);

  constexpr void __cordl_internal_set__values(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>* value);

  /// @brief Method .ctor, addr 0x24503ec, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x245261c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>* values);

  /// @brief Method get_Count, addr 0x2451d60, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_InitializedEmpty, addr 0x2452d08, size 0x8, virtual false, abstract: false, final false
  inline bool get_InitializedEmpty();

  /// @brief Method get_Item, addr 0x24516fc, size 0xbc, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* get_Item(::StringW key);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>*
  i___System__Collections__Generic__IEnumerable_1___Amazon__Runtime__Internal__Settings____SettingsCollection__ObjectSettings__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_InitializedEmpty, addr 0x2452d10, size 0xc, virtual false, abstract: false, final false
  inline void set_InitializedEmpty(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsCollection(SettingsCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsCollection(SettingsCollection const&) = delete;

  /// @brief Field _values, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>* ____values;

  /// @brief Field <InitializedEmpty>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____InitializedEmpty_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Settings::SettingsCollection, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::SettingsCollection, ____values) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::SettingsCollection, ____InitializedEmpty_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Settings
NEED_NO_BOX(::Amazon::Runtime::Internal::Settings::SettingsCollection);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::SettingsCollection*, "Amazon.Runtime.Internal.Settings", "SettingsCollection");
NEED_NO_BOX(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, "Amazon.Runtime.Internal.Settings", "SettingsCollection/ObjectSettings");
NEED_NO_BOX(::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::__SettingsCollection___GetEnumerator_d__11*, "Amazon.Runtime.Internal.Settings", "SettingsCollection/<GetEnumerator>d__11");
