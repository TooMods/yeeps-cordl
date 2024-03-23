#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameStat)
namespace GlobalNamespace {
class __GameStat__OnStatUpdated;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GameStat;
}
namespace GlobalNamespace {
class __GameStat__OnStatUpdated;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameStat);
MARK_REF_PTR_T(::GlobalNamespace::__GameStat__OnStatUpdated);
// Type: ::OnStatUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameStat::OnStatUpdated*
class CORDL_TYPE __GameStat__OnStatUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x29d1ed4, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t newValue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29d1f58, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x29d1ec0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t newValue);

  static inline ::GlobalNamespace::__GameStat__OnStatUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29d1dfc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameStat__OnStatUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameStat__OnStatUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameStat__OnStatUpdated(__GameStat__OnStatUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameStat__OnStatUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameStat__OnStatUpdated(__GameStat__OnStatUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameStat__OnStatUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GameStat
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameStat*
class CORDL_TYPE GameStat : public ::System::Object {
public:
  // Declarations
  using OnStatUpdated = ::GlobalNamespace::__GameStat__OnStatUpdated;

  /// @brief Field <key>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key_k__BackingField, put = __cordl_internal_set__key_k__BackingField))::StringW _key_k__BackingField;

  /// @brief Field <value>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__value_k__BackingField, put = __cordl_internal_set__value_k__BackingField)) int32_t _value_k__BackingField;

  __declspec(property(get = get_key, put = set_key))::StringW key;

  /// @brief Field lastUpdatedTimestamp, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lastUpdatedTimestamp, put = __cordl_internal_set_lastUpdatedTimestamp))::System::DateTime lastUpdatedTimestamp;

  /// @brief Field onStatUpdatedCallbacks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onStatUpdatedCallbacks, put = __cordl_internal_set_onStatUpdatedCallbacks))::GlobalNamespace::__GameStat__OnStatUpdated* onStatUpdatedCallbacks;

  __declspec(property(get = get_value, put = set_value)) int32_t value;

  /// @brief Method DeregisterCallbacks, addr 0x29d1944, size 0xa8, virtual false, abstract: false, final false
  inline bool DeregisterCallbacks(::GlobalNamespace::__GameStat__OnStatUpdated* onStatUpdated);

  /// @brief Method DisregardProgress, addr 0x29d1b14, size 0xa0, virtual false, abstract: false, final false
  inline void DisregardProgress(::System::DateTime earliestValidTime);

  /// @brief Method GetSerializedPayload, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetSerializedPayload();

  /// @brief Method Initialize, addr 0x29d1874, size 0x50, virtual false, abstract: false, final false
  inline void Initialize(::StringW key, ::System::DateTime initialTimestamp, ::StringW serializedPayload);

  /// @brief Method InitializeValue, addr 0x29d19ec, size 0x8, virtual false, abstract: false, final false
  inline void InitializeValue(int32_t initialValue);

  static inline ::GlobalNamespace::GameStat* New_ctor();

  /// @brief Method RegisterCallbacks, addr 0x29d18c4, size 0x80, virtual false, abstract: false, final false
  inline void RegisterCallbacks(::GlobalNamespace::__GameStat__OnStatUpdated* onStatUpdated);

  /// @brief Method RetrieveSavedProgress, addr 0x29d1bb4, size 0x1a8, virtual false, abstract: false, final false
  static inline void RetrieveSavedProgress(::StringW savedData, ::System::DateTime earliestAllowedTime, ByRef<::System::DateTime> initialTimestamp, ByRef<::StringW> serializedPayload);

  /// @brief Method Serialize, addr 0x29d1d5c, size 0x98, virtual false, abstract: false, final false
  inline ::StringW Serialize();

  /// @brief Method SetSerializedPayload, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetSerializedPayload(::StringW serializedPayload);

  /// @brief Method UpdateValue, addr 0x29d19f4, size 0x120, virtual false, abstract: false, final false
  inline void UpdateValue(int32_t newValue);

  constexpr ::StringW const& __cordl_internal_get__key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__key_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__value_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__value_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get_lastUpdatedTimestamp() const;

  constexpr ::System::DateTime& __cordl_internal_get_lastUpdatedTimestamp();

  constexpr ::GlobalNamespace::__GameStat__OnStatUpdated*& __cordl_internal_get_onStatUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameStat__OnStatUpdated*> const& __cordl_internal_get_onStatUpdatedCallbacks() const;

  constexpr void __cordl_internal_set__key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__value_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_lastUpdatedTimestamp(::System::DateTime value);

  constexpr void __cordl_internal_set_onStatUpdatedCallbacks(::GlobalNamespace::__GameStat__OnStatUpdated* value);

  /// @brief Method .ctor, addr 0x29d1df4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_key, addr 0x29d1854, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_key();

  /// @brief Method get_value, addr 0x29d1864, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

  /// @brief Method set_key, addr 0x29d185c, size 0x8, virtual false, abstract: false, final false
  inline void set_key(::StringW value);

  /// @brief Method set_value, addr 0x29d186c, size 0x8, virtual false, abstract: false, final false
  inline void set_value(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameStat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameStat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameStat(GameStat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameStat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameStat(GameStat const&) = delete;

  /// @brief Field <key>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____key_k__BackingField;

  /// @brief Field <value>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____value_k__BackingField;

  /// @brief Field lastUpdatedTimestamp, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ___lastUpdatedTimestamp;

  /// @brief Field onStatUpdatedCallbacks, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__GameStat__OnStatUpdated* ___onStatUpdatedCallbacks;

  /// @brief Field payloadSeparator offset 0xffffffff size 0x2
  static constexpr char16_t payloadSeparator{ u'$' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameStat, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStat, ____key_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStat, ____value_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStat, ___lastUpdatedTimestamp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStat, ___onStatUpdatedCallbacks) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameStat);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameStat*, "", "GameStat");
NEED_NO_BOX(::GlobalNamespace::__GameStat__OnStatUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameStat__OnStatUpdated*, "", "GameStat/OnStatUpdated");
