#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpentChannel)
namespace GlobalNamespace {
class __TimeSpentChannel__OnSessionComplete;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class TimeSpentChannel;
}
namespace GlobalNamespace {
class __TimeSpentChannel__OnSessionComplete;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimeSpentChannel);
MARK_REF_PTR_T(::GlobalNamespace::__TimeSpentChannel__OnSessionComplete);
// Type: ::OnSessionComplete
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TimeSpentChannel::OnSessionComplete*
class CORDL_TYPE __TimeSpentChannel__OnSessionComplete : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x15865c0, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW key, float_t timeSpent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1586654, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x15865ac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW key, float_t timeSpent);

  static inline ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x15864d4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSpentChannel__OnSessionComplete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TimeSpentChannel__OnSessionComplete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimeSpentChannel__OnSessionComplete(__TimeSpentChannel__OnSessionComplete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimeSpentChannel__OnSessionComplete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimeSpentChannel__OnSessionComplete(__TimeSpentChannel__OnSessionComplete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TimeSpentChannel
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TimeSpentChannel*
class CORDL_TYPE TimeSpentChannel : public ::System::Object {
public:
  // Declarations
  using OnSessionComplete = ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete;

  /// @brief Field <channelKey>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__channelKey_k__BackingField, put = __cordl_internal_set__channelKey_k__BackingField))::StringW _channelKey_k__BackingField;

  __declspec(property(get = get_channelKey, put = set_channelKey))::StringW channelKey;

  /// @brief Field currentKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_currentKey, put = __cordl_internal_set_currentKey))::StringW currentKey;

  /// @brief Field currentKeyStartTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_currentKeyStartTime, put = __cordl_internal_set_currentKeyStartTime)) float_t currentKeyStartTime;

  /// @brief Field onSessionComplete, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onSessionComplete, put = __cordl_internal_set_onSessionComplete))::GlobalNamespace::__TimeSpentChannel__OnSessionComplete* onSessionComplete;

  /// @brief Method EndSession, addr 0x158647c, size 0x58, virtual false, abstract: false, final false
  inline void EndSession();

  static inline ::GlobalNamespace::TimeSpentChannel* New_ctor(::StringW channelKey, ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete* onSessionComplete);

  /// @brief Method StartSession, addr 0x1586430, size 0x4c, virtual false, abstract: false, final false
  inline void StartSession(::StringW key);

  constexpr ::StringW const& __cordl_internal_get__channelKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__channelKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_currentKey() const;

  constexpr ::StringW& __cordl_internal_get_currentKey();

  constexpr float_t const& __cordl_internal_get_currentKeyStartTime() const;

  constexpr float_t& __cordl_internal_get_currentKeyStartTime();

  constexpr ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*& __cordl_internal_get_onSessionComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*> const& __cordl_internal_get_onSessionComplete() const;

  constexpr void __cordl_internal_set__channelKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_currentKey(::StringW value);

  constexpr void __cordl_internal_set_currentKeyStartTime(float_t value);

  constexpr void __cordl_internal_set_onSessionComplete(::GlobalNamespace::__TimeSpentChannel__OnSessionComplete* value);

  /// @brief Method .ctor, addr 0x1586400, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW channelKey, ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete* onSessionComplete);

  /// @brief Method get_channelKey, addr 0x15863f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_channelKey();

  /// @brief Method set_channelKey, addr 0x15863f8, size 0x8, virtual false, abstract: false, final false
  inline void set_channelKey(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpentChannel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeSpentChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeSpentChannel(TimeSpentChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeSpentChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeSpentChannel(TimeSpentChannel const&) = delete;

  /// @brief Field <channelKey>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____channelKey_k__BackingField;

  /// @brief Field currentKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___currentKey;

  /// @brief Field currentKeyStartTime, offset: 0x20, size: 0x4, def value: None
  float_t ___currentKeyStartTime;

  /// @brief Field onSessionComplete, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__TimeSpentChannel__OnSessionComplete* ___onSessionComplete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimeSpentChannel, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpentChannel, ____channelKey_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpentChannel, ___currentKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpentChannel, ___currentKeyStartTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeSpentChannel, ___onSessionComplete) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimeSpentChannel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeSpentChannel*, "", "TimeSpentChannel");
NEED_NO_BOX(::GlobalNamespace::__TimeSpentChannel__OnSessionComplete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TimeSpentChannel__OnSessionComplete*, "", "TimeSpentChannel/OnSessionComplete");
