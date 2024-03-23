#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SettingsManager)
namespace Amazon::Runtime::Internal::Settings {
class SettingsCollection;
}
namespace Amazon::Runtime::Internal::Settings {
class __SettingsCollection__ObjectSettings;
}
namespace Amazon::Util::Internal {
class __SettingsManager____c;
}
namespace Amazon::Util::Internal {
class __SettingsManager____c__DisplayClass12_0;
}
namespace Amazon::Util::Internal {
class __SettingsManager____c__DisplayClass16_0;
}
namespace Amazon::Util::Internal {
class __SettingsManager____c__DisplayClass17_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Amazon::Util::Internal {
class SettingsManager;
}
namespace Amazon::Util::Internal {
class __SettingsManager____c;
}
namespace Amazon::Util::Internal {
class __SettingsManager____c__DisplayClass12_0;
}
namespace Amazon::Util::Internal {
class __SettingsManager____c__DisplayClass16_0;
}
namespace Amazon::Util::Internal {
class __SettingsManager____c__DisplayClass17_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::SettingsManager);
MARK_REF_PTR_T(::Amazon::Util::Internal::__SettingsManager____c);
MARK_REF_PTR_T(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0);
MARK_REF_PTR_T(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0);
MARK_REF_PTR_T(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::SettingsManager::<>c*
class CORDL_TYPE __SettingsManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Util::Internal::__SettingsManager____c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0,
                             put = setStaticF___9__11_0))::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>* __9__11_0;

  static inline ::Amazon::Util::Internal::__SettingsManager____c* New_ctor();

  /// @brief Method <ListUniqueKeys>b__11_0, addr 0x1fd898c, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _ListUniqueKeys_b__11_0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* x);

  /// @brief Method .ctor, addr 0x1fd8984, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Util::Internal::__SettingsManager____c* getStaticF___9();

  static inline ::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>* getStaticF___9__11_0();

  static inline void setStaticF___9(::Amazon::Util::Internal::__SettingsManager____c* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager____c(__SettingsManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager____c(__SettingsManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::__SettingsManager____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Util::Internal
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::SettingsManager::<>c__DisplayClass12_0*
class CORDL_TYPE __SettingsManager____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field propertyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyName, put = __cordl_internal_set_propertyName))::StringW propertyName;

  static inline ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0* New_ctor();

  /// @brief Method <SelectProperty>b__0, addr 0x1fd89a4, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _SelectProperty_b__0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* x);

  constexpr ::StringW const& __cordl_internal_get_propertyName() const;

  constexpr ::StringW& __cordl_internal_get_propertyName();

  constexpr void __cordl_internal_set_propertyName(::StringW value);

  /// @brief Method .ctor, addr 0x1fd8830, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager____c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager____c__DisplayClass12_0(__SettingsManager____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager____c__DisplayClass12_0(__SettingsManager____c__DisplayClass12_0 const&) = delete;

  /// @brief Field propertyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___propertyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0, ___propertyName) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util::Internal
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::SettingsManager::<>c__DisplayClass16_0*
class CORDL_TYPE __SettingsManager____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field propertyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyName, put = __cordl_internal_set_propertyName))::StringW propertyName;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::StringW value;

  static inline ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0* New_ctor();

  /// @brief Method <TryGetObjectSettings>b__0, addr 0x1fd89c8, size 0x38, virtual false, abstract: false, final false
  inline bool _TryGetObjectSettings_b__0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* x);

  constexpr ::StringW const& __cordl_internal_get_propertyName() const;

  constexpr ::StringW& __cordl_internal_get_propertyName();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_propertyName(::StringW value);

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x1fd88a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager____c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager____c__DisplayClass16_0(__SettingsManager____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager____c__DisplayClass16_0(__SettingsManager____c__DisplayClass16_0 const&) = delete;

  /// @brief Field propertyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___propertyName;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::StringW ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0, ___propertyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0, ___value) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util::Internal
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::SettingsManager::<>c__DisplayClass17_0*
class CORDL_TYPE __SettingsManager____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field uniqueKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_uniqueKey, put = __cordl_internal_set_uniqueKey))::StringW uniqueKey;

  static inline ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0* New_ctor();

  /// @brief Method <TryGetObjectSettings>b__0, addr 0x1fd8a00, size 0x28, virtual false, abstract: false, final false
  inline bool _TryGetObjectSettings_b__0(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* x);

  constexpr ::StringW const& __cordl_internal_get_uniqueKey() const;

  constexpr ::StringW& __cordl_internal_get_uniqueKey();

  constexpr void __cordl_internal_set_uniqueKey(::StringW value);

  /// @brief Method .ctor, addr 0x1fd88b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsManager____c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SettingsManager____c__DisplayClass17_0(__SettingsManager____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SettingsManager____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SettingsManager____c__DisplayClass17_0(__SettingsManager____c__DisplayClass17_0 const&) = delete;

  /// @brief Field uniqueKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___uniqueKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0, ___uniqueKey) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util::Internal
// Type: Amazon.Util.Internal::SettingsManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::Amazon.Util.Internal::SettingsManager*
class CORDL_TYPE SettingsManager : public ::System::Object {
public:
  // Declarations
  using __c = ::Amazon::Util::Internal::__SettingsManager____c;

  using __c__DisplayClass12_0 = ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0;

  using __c__DisplayClass16_0 = ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0;

  using __c__DisplayClass17_0 = ::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0;

  __declspec(property(get = get_SettingsType, put = set_SettingsType))::StringW SettingsType;

  /// @brief Field <SettingsType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__SettingsType_k__BackingField, put = __cordl_internal_set__SettingsType_k__BackingField))::StringW _SettingsType_k__BackingField;

  /// @brief Method EnsureAvailable, addr 0x1fd773c, size 0x60, virtual false, abstract: false, final false
  static inline void EnsureAvailable();

  /// @brief Method GetSettings, addr 0x1fd7a08, size 0x104, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* GetSettings();

  /// @brief Method ListUniqueKeys, addr 0x1fd8598, size 0x160, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* ListUniqueKeys();

  static inline ::Amazon::Util::Internal::SettingsManager* New_ctor(::StringW settingsType);

  /// @brief Method RegisterObject, addr 0x1fd77ac, size 0xc, virtual false, abstract: false, final false
  inline ::StringW RegisterObject(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* properties);

  /// @brief Method RegisterObject, addr 0x1fd77b8, size 0x250, virtual false, abstract: false, final false
  inline ::StringW RegisterObject(::StringW uniqueKey, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* properties);

  /// @brief Method SaveSettings, addr 0x1fd7bf8, size 0x118, virtual false, abstract: false, final false
  inline void SaveSettings(::Amazon::Runtime::Internal::Settings::SettingsCollection* settings);

  /// @brief Method SelectProperty, addr 0x1fd86f8, size 0x138, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* SelectProperty(::StringW propertyName);

  /// @brief Method TryGetObject, addr 0x1fd7d10, size 0x3bc, virtual false, abstract: false, final false
  inline bool TryGetObject(::StringW uniqueKey, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> properties);

  /// @brief Method TryGetObjectByProperty, addr 0x1fd80cc, size 0x3d4, virtual false, abstract: false, final false
  inline bool TryGetObjectByProperty(::StringW propertyName, ::StringW value, ByRef<::StringW> uniqueKey, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> properties);

  /// @brief Method TryGetObjectSettings, addr 0x1fd84a0, size 0xf8, virtual false, abstract: false, final false
  static inline bool TryGetObjectSettings(::StringW propertyName, ::StringW value, ::Amazon::Runtime::Internal::Settings::SettingsCollection* settings,
                                          ByRef<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*> objectSettings);

  /// @brief Method TryGetObjectSettings, addr 0x1fd7b0c, size 0xec, virtual false, abstract: false, final false
  static inline bool TryGetObjectSettings(::StringW uniqueKey, ::Amazon::Runtime::Internal::Settings::SettingsCollection* settings,
                                          ByRef<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*> objectSettings);

  /// @brief Method UnregisterObject, addr 0x1fd8838, size 0x70, virtual false, abstract: false, final false
  inline void UnregisterObject(::StringW uniqueKey);

  constexpr ::StringW const& __cordl_internal_get__SettingsType_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SettingsType_k__BackingField();

  constexpr void __cordl_internal_set__SettingsType_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x1fd7710, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW settingsType);

  /// @brief Method get_IsAvailable, addr 0x1fd7708, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvailable();

  /// @brief Method get_SettingsType, addr 0x1fd779c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SettingsType();

  /// @brief Method set_SettingsType, addr 0x1fd77a4, size 0x8, virtual false, abstract: false, final false
  inline void set_SettingsType(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsManager(SettingsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsManager(SettingsManager const&) = delete;

  /// @brief Field <SettingsType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____SettingsType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::SettingsManager, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::SettingsManager, ____SettingsType_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util::Internal
NEED_NO_BOX(::Amazon::Util::Internal::SettingsManager);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::SettingsManager*, "Amazon.Util.Internal", "SettingsManager");
NEED_NO_BOX(::Amazon::Util::Internal::__SettingsManager____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::__SettingsManager____c*, "Amazon.Util.Internal", "SettingsManager/<>c");
NEED_NO_BOX(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass12_0*, "Amazon.Util.Internal", "SettingsManager/<>c__DisplayClass12_0");
NEED_NO_BOX(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass16_0*, "Amazon.Util.Internal", "SettingsManager/<>c__DisplayClass16_0");
NEED_NO_BOX(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::__SettingsManager____c__DisplayClass17_0*, "Amazon.Util.Internal", "SettingsManager/<>c__DisplayClass17_0");
