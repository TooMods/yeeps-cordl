#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentSingleton_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "Unity/Services/Vivox/zzzz__AudioFadeModel_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceChatManager)
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
class ToxModVivoxHelper;
}
namespace GlobalNamespace {
class VoiceChatSource;
}
namespace GlobalNamespace {
class __VoiceChatManager__OnChannelStateChangedCallback;
}
namespace GlobalNamespace {
class __VoiceChatManager__OnGlobalMutedStateChangedCallback;
}
namespace GlobalNamespace {
class __VoiceChatManager__OnSelfForceMutedStateChangedCallback;
}
namespace GlobalNamespace {
class __VoiceChatManager__OnSelfMutedStateChangedCallback;
}
namespace GlobalNamespace {
class __VoiceChatManager__OnSpeakingVolumeUpdated;
}
namespace GlobalNamespace {
class __VoiceChatManager__OnUserMutedStateChangedCallback;
}
namespace GlobalNamespace {
struct __VoiceChatManager___Initialize_d__44;
}
namespace GlobalNamespace {
struct __VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50;
}
namespace GlobalNamespace {
struct __VoiceChatManager___JoinPositionalChannel_d__61;
}
namespace GlobalNamespace {
struct __VoiceChatManager___LogoutAsync_d__46;
}
namespace GlobalNamespace {
struct __VoiceChatManager___SetMuteSelf_d__122;
}
namespace GlobalNamespace {
struct __VoiceChatManager___TryLogin_d__56;
}
namespace GlobalNamespace {
struct __VoiceChatManager___TryRejoinPendingJoinChannel_d__75;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
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
namespace Unity::Services::Vivox {
class Channel3DProperties;
}
namespace Unity::Services::Vivox {
class LoginOptions;
}
namespace Unity::Services::Vivox {
class VivoxInputDevice;
}
namespace Unity::Services::Vivox {
class VivoxParticipant;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceChatManager;
}
namespace GlobalNamespace {
class __VoiceChatManager__OnChannelStateChangedCallback;
}
namespace GlobalNamespace {
class __VoiceChatManager__OnGlobalMutedStateChangedCallback;
}
namespace GlobalNamespace {
class __VoiceChatManager__OnSelfForceMutedStateChangedCallback;
}
namespace GlobalNamespace {
class __VoiceChatManager__OnSelfMutedStateChangedCallback;
}
namespace GlobalNamespace {
class __VoiceChatManager__OnSpeakingVolumeUpdated;
}
namespace GlobalNamespace {
class __VoiceChatManager__OnUserMutedStateChangedCallback;
}
namespace GlobalNamespace {
struct __VoiceChatManager___Initialize_d__44;
}
namespace GlobalNamespace {
struct __VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50;
}
namespace GlobalNamespace {
struct __VoiceChatManager___JoinPositionalChannel_d__61;
}
namespace GlobalNamespace {
struct __VoiceChatManager___LogoutAsync_d__46;
}
namespace GlobalNamespace {
struct __VoiceChatManager___SetMuteSelf_d__122;
}
namespace GlobalNamespace {
struct __VoiceChatManager___TryLogin_d__56;
}
namespace GlobalNamespace {
struct __VoiceChatManager___TryRejoinPendingJoinChannel_d__75;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VoiceChatManager);
MARK_REF_PTR_T(::GlobalNamespace::__VoiceChatManager__OnChannelStateChangedCallback);
MARK_REF_PTR_T(::GlobalNamespace::__VoiceChatManager__OnGlobalMutedStateChangedCallback);
MARK_REF_PTR_T(::GlobalNamespace::__VoiceChatManager__OnSelfForceMutedStateChangedCallback);
MARK_REF_PTR_T(::GlobalNamespace::__VoiceChatManager__OnSelfMutedStateChangedCallback);
MARK_REF_PTR_T(::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__VoiceChatManager__OnUserMutedStateChangedCallback);
MARK_VAL_T(::GlobalNamespace::__VoiceChatManager___Initialize_d__44);
MARK_VAL_T(::GlobalNamespace::__VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50);
MARK_VAL_T(::GlobalNamespace::__VoiceChatManager___JoinPositionalChannel_d__61);
MARK_VAL_T(::GlobalNamespace::__VoiceChatManager___LogoutAsync_d__46);
MARK_VAL_T(::GlobalNamespace::__VoiceChatManager___SetMuteSelf_d__122);
MARK_VAL_T(::GlobalNamespace::__VoiceChatManager___TryLogin_d__56);
MARK_VAL_T(::GlobalNamespace::__VoiceChatManager___TryRejoinPendingJoinChannel_d__75);
// Type: ::OnChannelStateChangedCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VoiceChatManager::OnChannelStateChangedCallback*
class CORDL_TYPE __VoiceChatManager__OnChannelStateChangedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf31170, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW channelName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf31190, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf3115c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW channelName);

  static inline ::GlobalNamespace::__VoiceChatManager__OnChannelStateChangedCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf31088, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager__OnChannelStateChangedCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VoiceChatManager__OnChannelStateChangedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VoiceChatManager__OnChannelStateChangedCallback(__VoiceChatManager__OnChannelStateChangedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VoiceChatManager__OnChannelStateChangedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VoiceChatManager__OnChannelStateChangedCallback(__VoiceChatManager__OnChannelStateChangedCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager__OnChannelStateChangedCallback, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnSpeakingVolumeUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VoiceChatManager::OnSpeakingVolumeUpdated*
class CORDL_TYPE __VoiceChatManager__OnSpeakingVolumeUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf311b0, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(float_t newSpeakingVolume, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf31234, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf3119c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(float_t newSpeakingVolume);

  static inline ::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf24a94, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager__OnSpeakingVolumeUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VoiceChatManager__OnSpeakingVolumeUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VoiceChatManager__OnSpeakingVolumeUpdated(__VoiceChatManager__OnSpeakingVolumeUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VoiceChatManager__OnSpeakingVolumeUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VoiceChatManager__OnSpeakingVolumeUpdated(__VoiceChatManager__OnSpeakingVolumeUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnSelfMutedStateChangedCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VoiceChatManager::OnSelfMutedStateChangedCallback*
class CORDL_TYPE __VoiceChatManager__OnSelfMutedStateChangedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf31258, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newMuted, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf312e0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf31240, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newMuted);

  static inline ::GlobalNamespace::__VoiceChatManager__OnSelfMutedStateChangedCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf2462c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager__OnSelfMutedStateChangedCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VoiceChatManager__OnSelfMutedStateChangedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VoiceChatManager__OnSelfMutedStateChangedCallback(__VoiceChatManager__OnSelfMutedStateChangedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VoiceChatManager__OnSelfMutedStateChangedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VoiceChatManager__OnSelfMutedStateChangedCallback(__VoiceChatManager__OnSelfMutedStateChangedCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager__OnSelfMutedStateChangedCallback, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnUserMutedStateChangedCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VoiceChatManager::OnUserMutedStateChangedCallback*
class CORDL_TYPE __VoiceChatManager__OnUserMutedStateChangedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf313dc, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW userID, bool newMuted, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf31474, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf313c4, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::StringW userID, bool newMuted);

  static inline ::GlobalNamespace::__VoiceChatManager__OnUserMutedStateChangedCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf312ec, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager__OnUserMutedStateChangedCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VoiceChatManager__OnUserMutedStateChangedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VoiceChatManager__OnUserMutedStateChangedCallback(__VoiceChatManager__OnUserMutedStateChangedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VoiceChatManager__OnUserMutedStateChangedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VoiceChatManager__OnUserMutedStateChangedCallback(__VoiceChatManager__OnUserMutedStateChangedCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager__OnUserMutedStateChangedCallback, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnSelfForceMutedStateChangedCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VoiceChatManager::OnSelfForceMutedStateChangedCallback*
class CORDL_TYPE __VoiceChatManager__OnSelfForceMutedStateChangedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf3155c, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newForceMuted, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf315e4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf31544, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newForceMuted);

  static inline ::GlobalNamespace::__VoiceChatManager__OnSelfForceMutedStateChangedCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf31480, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager__OnSelfForceMutedStateChangedCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VoiceChatManager__OnSelfForceMutedStateChangedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VoiceChatManager__OnSelfForceMutedStateChangedCallback(__VoiceChatManager__OnSelfForceMutedStateChangedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VoiceChatManager__OnSelfForceMutedStateChangedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VoiceChatManager__OnSelfForceMutedStateChangedCallback(__VoiceChatManager__OnSelfForceMutedStateChangedCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager__OnSelfForceMutedStateChangedCallback, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGlobalMutedStateChangedCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VoiceChatManager::OnGlobalMutedStateChangedCallback*
class CORDL_TYPE __VoiceChatManager__OnGlobalMutedStateChangedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0xf316cc, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newGlobalMuted, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0xf31754, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0xf316b4, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newGlobalMuted);

  static inline ::GlobalNamespace::__VoiceChatManager__OnGlobalMutedStateChangedCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0xf315f0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager__OnGlobalMutedStateChangedCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VoiceChatManager__OnGlobalMutedStateChangedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VoiceChatManager__OnGlobalMutedStateChangedCallback(__VoiceChatManager__OnGlobalMutedStateChangedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VoiceChatManager__OnGlobalMutedStateChangedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VoiceChatManager__OnGlobalMutedStateChangedCallback(__VoiceChatManager__OnGlobalMutedStateChangedCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager__OnGlobalMutedStateChangedCallback, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<Initialize>d__44
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::VoiceChatManager::<Initialize>d__44
struct CORDL_TYPE __VoiceChatManager___Initialize_d__44 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf31760, size 0x1180, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf328e0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager___Initialize_d__44();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::VoiceChatManager>", modifiers: "",
  // def_value: None }, CppParam { name: "userID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }]
  constexpr __VoiceChatManager___Initialize_d__44(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this,
                                                  ::StringW userID, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this;

  /// @brief Field userID, offset: 0x30, size: 0x8, def value: None
  ::StringW userID;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager___Initialize_d__44, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___Initialize_d__44, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___Initialize_d__44, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___Initialize_d__44, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___Initialize_d__44, userID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___Initialize_d__44, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LogoutAsync>d__46
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::VoiceChatManager::<LogoutAsync>d__46
struct CORDL_TYPE __VoiceChatManager___LogoutAsync_d__46 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf328ec, size 0x4f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf32de0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager___LogoutAsync_d__46();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::VoiceChatManager>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VoiceChatManager___LogoutAsync_d__46(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                   ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager___LogoutAsync_d__46, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___LogoutAsync_d__46, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___LogoutAsync_d__46, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___LogoutAsync_d__46, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___LogoutAsync_d__46, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<JoinPhotonRoomVoiceChannelOnDelay>d__50
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::VoiceChatManager::<JoinPhotonRoomVoiceChannelOnDelay>d__50
struct CORDL_TYPE __VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf32e38, size 0x260, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf33098, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "roomName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::UnityW<::GlobalNamespace::VoiceChatManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr __VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW roomName,
                                                                         ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field roomName, offset: 0x28, size: 0x8, def value: None
  ::StringW roomName;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50, roomName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryLogin>d__56
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::VoiceChatManager::<TryLogin>d__56
struct CORDL_TYPE __VoiceChatManager___TryLogin_d__56 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf330a4, size 0x41c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf334c0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager___TryLogin_d__56();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::VoiceChatManager>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VoiceChatManager___TryLogin_d__56(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this,
                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager___TryLogin_d__56, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___TryLogin_d__56, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___TryLogin_d__56, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___TryLogin_d__56, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___TryLogin_d__56, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<JoinPositionalChannel>d__61
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::VoiceChatManager::<JoinPositionalChannel>d__61
struct CORDL_TYPE __VoiceChatManager___JoinPositionalChannel_d__61 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf334cc, size 0x524, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf339f0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager___JoinPositionalChannel_d__61();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "channelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::UnityW<::GlobalNamespace::VoiceChatManager>", modifiers: "", def_value: None }, CppParam { name: "isPrivate", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __VoiceChatManager___JoinPositionalChannel_d__61(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW channelName,
                                                             ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this, bool isPrivate, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field channelName, offset: 0x28, size: 0x8, def value: None
  ::StringW channelName;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this;

  /// @brief Field isPrivate, offset: 0x38, size: 0x1, def value: None
  bool isPrivate;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager___JoinPositionalChannel_d__61, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___JoinPositionalChannel_d__61, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___JoinPositionalChannel_d__61, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___JoinPositionalChannel_d__61, channelName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___JoinPositionalChannel_d__61, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___JoinPositionalChannel_d__61, isPrivate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___JoinPositionalChannel_d__61, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryRejoinPendingJoinChannel>d__75
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::VoiceChatManager::<TryRejoinPendingJoinChannel>d__75
struct CORDL_TYPE __VoiceChatManager___TryRejoinPendingJoinChannel_d__75 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf339fc, size 0x2a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf33ca0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager___TryRejoinPendingJoinChannel_d__75();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::VoiceChatManager>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __VoiceChatManager___TryRejoinPendingJoinChannel_d__75(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                   ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager___TryRejoinPendingJoinChannel_d__75, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___TryRejoinPendingJoinChannel_d__75, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___TryRejoinPendingJoinChannel_d__75, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___TryRejoinPendingJoinChannel_d__75, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___TryRejoinPendingJoinChannel_d__75, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SetMuteSelf>d__122
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::VoiceChatManager::<SetMuteSelf>d__122
struct CORDL_TYPE __VoiceChatManager___SetMuteSelf_d__122 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0xf33cac, size 0x6dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xf34388, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VoiceChatManager___SetMuteSelf_d__122();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "newMuted", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::UnityW<::GlobalNamespace::VoiceChatManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr __VoiceChatManager___SetMuteSelf_d__122(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, bool newMuted,
                                                    ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field newMuted, offset: 0x28, size: 0x1, def value: None
  bool newMuted;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VoiceChatManager> __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VoiceChatManager___SetMuteSelf_d__122, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___SetMuteSelf_d__122, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___SetMuteSelf_d__122, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___SetMuteSelf_d__122, newMuted) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___SetMuteSelf_d__122, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VoiceChatManager___SetMuteSelf_d__122, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VoiceChatManager
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VoiceChatManager*
class CORDL_TYPE VoiceChatManager : public ::GlobalNamespace::PersistentSingleton_1<::UnityW<::GlobalNamespace::VoiceChatManager>> {
public:
  // Declarations
  using OnChannelStateChangedCallback = ::GlobalNamespace::__VoiceChatManager__OnChannelStateChangedCallback;

  using OnGlobalMutedStateChangedCallback = ::GlobalNamespace::__VoiceChatManager__OnGlobalMutedStateChangedCallback;

  using OnSelfForceMutedStateChangedCallback = ::GlobalNamespace::__VoiceChatManager__OnSelfForceMutedStateChangedCallback;

  using OnSelfMutedStateChangedCallback = ::GlobalNamespace::__VoiceChatManager__OnSelfMutedStateChangedCallback;

  using OnSpeakingVolumeUpdated = ::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated;

  using OnUserMutedStateChangedCallback = ::GlobalNamespace::__VoiceChatManager__OnUserMutedStateChangedCallback;

  using _Initialize_d__44 = ::GlobalNamespace::__VoiceChatManager___Initialize_d__44;

  using _JoinPhotonRoomVoiceChannelOnDelay_d__50 = ::GlobalNamespace::__VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50;

  using _JoinPositionalChannel_d__61 = ::GlobalNamespace::__VoiceChatManager___JoinPositionalChannel_d__61;

  using _LogoutAsync_d__46 = ::GlobalNamespace::__VoiceChatManager___LogoutAsync_d__46;

  using _SetMuteSelf_d__122 = ::GlobalNamespace::__VoiceChatManager___SetMuteSelf_d__122;

  using _TryLogin_d__56 = ::GlobalNamespace::__VoiceChatManager___TryLogin_d__56;

  using _TryRejoinPendingJoinChannel_d__75 = ::GlobalNamespace::__VoiceChatManager___TryRejoinPendingJoinChannel_d__75;

  /// @brief Field <currentChannelName>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__currentChannelName_k__BackingField, put = setStaticF__currentChannelName_k__BackingField))::StringW _currentChannelName_k__BackingField;

  /// @brief Field <hasRoomPositionOffset>k__BackingField, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get__hasRoomPositionOffset_k__BackingField,
                      put = __cordl_internal_set__hasRoomPositionOffset_k__BackingField)) bool _hasRoomPositionOffset_k__BackingField;

  /// @brief Field <isInChannel>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__isInChannel_k__BackingField, put = __cordl_internal_set__isInChannel_k__BackingField)) bool _isInChannel_k__BackingField;

  /// @brief Field <isSelfMuted>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isSelfMuted_k__BackingField, put = setStaticF__isSelfMuted_k__BackingField)) bool _isSelfMuted_k__BackingField;

  /// @brief Field awaitingChannelIsPrivate, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_awaitingChannelIsPrivate, put = __cordl_internal_set_awaitingChannelIsPrivate)) bool awaitingChannelIsPrivate;

  /// @brief Field awaitingChannelName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_awaitingChannelName, put = __cordl_internal_set_awaitingChannelName))::StringW awaitingChannelName;

  /// @brief Field canUseToxMod, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_canUseToxMod, put = setStaticF_canUseToxMod)) bool canUseToxMod;

  /// @brief Field curVoiceChatSource, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_curVoiceChatSource, put = __cordl_internal_set_curVoiceChatSource))::UnityW<::GlobalNamespace::VoiceChatSource> curVoiceChatSource;

  /// @brief Field defaultDevice, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultDevice, put = __cordl_internal_set_defaultDevice))::Unity::Services::Vivox::VivoxInputDevice* defaultDevice;

  __declspec(property(get = get_hasRoomPositionOffset, put = set_hasRoomPositionOffset)) bool hasRoomPositionOffset;

  __declspec(property(get = get_isInChannel, put = set_isInChannel)) bool isInChannel;

  /// @brief Field isInToxModSession, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_isInToxModSession, put = __cordl_internal_set_isInToxModSession)) bool isInToxModSession;

  /// @brief Field isInitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isInitialized, put = setStaticF_isInitialized)) bool isInitialized;

  /// @brief Field isLoggingIn, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get_isLoggingIn, put = __cordl_internal_set_isLoggingIn)) bool isLoggingIn;

  /// @brief Field isSelfForceMuted, offset 0xb1, size 0x1
  __declspec(property(get = __cordl_internal_get_isSelfForceMuted, put = __cordl_internal_set_isSelfForceMuted)) bool isSelfForceMuted;

  /// @brief Field loginOptions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_loginOptions, put = __cordl_internal_set_loginOptions))::Unity::Services::Vivox::LoginOptions* loginOptions;

  /// @brief Field masterPlayer, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::Player> masterPlayer;

  /// @brief Field mutedUserIDs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mutedUserIDs, put = setStaticF_mutedUserIDs))::System::Collections::Generic::List_1<::StringW>* mutedUserIDs;

  /// @brief Field nextInternetCheckTime, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_nextInternetCheckTime, put = __cordl_internal_set_nextInternetCheckTime)) float_t nextInternetCheckTime;

  /// @brief Field nextPositionUpdateTime, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_nextPositionUpdateTime, put = __cordl_internal_set_nextPositionUpdateTime)) float_t nextPositionUpdateTime;

  /// @brief Field nextReconnectTime, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_nextReconnectTime, put = __cordl_internal_set_nextReconnectTime)) float_t nextReconnectTime;

  /// @brief Field noDevice, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_noDevice, put = __cordl_internal_set_noDevice))::Unity::Services::Vivox::VivoxInputDevice* noDevice;

  /// @brief Field onChannelJoinedPersistentCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onChannelJoinedPersistentCallbacks,
                             put = setStaticF_onChannelJoinedPersistentCallbacks))::GlobalNamespace::__VoiceChatManager__OnChannelStateChangedCallback* onChannelJoinedPersistentCallbacks;

  /// @brief Field onChannelLeftPersistentCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onChannelLeftPersistentCallbacks,
                             put = setStaticF_onChannelLeftPersistentCallbacks))::GlobalNamespace::__VoiceChatManager__OnChannelStateChangedCallback* onChannelLeftPersistentCallbacks;

  /// @brief Field onGlobalMutedStateChangedCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onGlobalMutedStateChangedCallbacks,
                             put = setStaticF_onGlobalMutedStateChangedCallbacks))::GlobalNamespace::__VoiceChatManager__OnGlobalMutedStateChangedCallback* onGlobalMutedStateChangedCallbacks;

  /// @brief Field onLocalSpeakingVolumeUpdatedCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onLocalSpeakingVolumeUpdatedCallback,
                             put = setStaticF_onLocalSpeakingVolumeUpdatedCallback))::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated* onLocalSpeakingVolumeUpdatedCallback;

  /// @brief Field onSelfForceMutedStateChangedCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onSelfForceMutedStateChangedCallbacks,
                             put = setStaticF_onSelfForceMutedStateChangedCallbacks))::GlobalNamespace::__VoiceChatManager__OnSelfForceMutedStateChangedCallback* onSelfForceMutedStateChangedCallbacks;

  /// @brief Field onSelfMutedStateChangedCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onSelfMutedStateChangedCallbacks,
                             put = setStaticF_onSelfMutedStateChangedCallbacks))::GlobalNamespace::__VoiceChatManager__OnSelfMutedStateChangedCallback* onSelfMutedStateChangedCallbacks;

  /// @brief Field onSpeakingVolumeUpdatedCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onSpeakingVolumeUpdatedCallbacks, put = setStaticF_onSpeakingVolumeUpdatedCallbacks))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated*>* onSpeakingVolumeUpdatedCallbacks;

  /// @brief Field onUserMutedStateChangedCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onUserMutedStateChangedCallbacks,
                             put = setStaticF_onUserMutedStateChangedCallbacks))::GlobalNamespace::__VoiceChatManager__OnUserMutedStateChangedCallback* onUserMutedStateChangedCallbacks;

  /// @brief Field pendingJoinChannelIsPrivate, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_pendingJoinChannelIsPrivate, put = __cordl_internal_set_pendingJoinChannelIsPrivate)) bool pendingJoinChannelIsPrivate;

  /// @brief Field pendingJoinChannelName, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_pendingJoinChannelName, put = __cordl_internal_set_pendingJoinChannelName))::StringW pendingJoinChannelName;

  /// @brief Field persistantChannelName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_persistantChannelName, put = __cordl_internal_set_persistantChannelName))::StringW persistantChannelName;

  /// @brief Field privateWorldChannel3DProperties, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_privateWorldChannel3DProperties,
                      put = __cordl_internal_set_privateWorldChannel3DProperties))::Unity::Services::Vivox::Channel3DProperties* privateWorldChannel3DProperties;

  /// @brief Field publicWorldChannel3DProperties, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_publicWorldChannel3DProperties,
                      put = __cordl_internal_set_publicWorldChannel3DProperties))::Unity::Services::Vivox::Channel3DProperties* publicWorldChannel3DProperties;

  /// @brief Field roomPositionOffset, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get_roomPositionOffset, put = __cordl_internal_set_roomPositionOffset))::UnityEngine::Vector3 roomPositionOffset;

  /// @brief Field shouldUseToxModInSession, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldUseToxModInSession, put = __cordl_internal_set_shouldUseToxModInSession)) bool shouldUseToxModInSession;

  /// @brief Field shouldVoiceChatPersistBetweenPhotonRooms, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldVoiceChatPersistBetweenPhotonRooms,
                      put = __cordl_internal_set_shouldVoiceChatPersistBetweenPhotonRooms)) bool shouldVoiceChatPersistBetweenPhotonRooms;

  /// @brief Field toxModHelper, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_toxModHelper, put = __cordl_internal_set_toxModHelper))::GlobalNamespace::ToxModVivoxHelper* toxModHelper;

  /// @brief Field toxModSampleRate, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_toxModSampleRate, put = __cordl_internal_set_toxModSampleRate)) int32_t toxModSampleRate;

  /// @brief Field voiceChatSources, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_voiceChatSources,
                      put = __cordl_internal_set_voiceChatSources))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VoiceChatSource>>* voiceChatSources;

  /// @brief Field waitingToInitialize, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_waitingToInitialize, put = setStaticF_waitingToInitialize)) bool waitingToInitialize;

  /// @brief Field wasUnmutedBeforeForceMute, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_wasUnmutedBeforeForceMute, put = __cordl_internal_set_wasUnmutedBeforeForceMute)) bool wasUnmutedBeforeForceMute;

  /// @brief Method ClearPendingJoinChannel, addr 0xf2caf4, size 0xc, virtual false, abstract: false, final false
  inline void ClearPendingJoinChannel();

  /// @brief Method ClearRoomPositionOffset, addr 0xf2d0a0, size 0xb0, virtual false, abstract: false, final false
  inline void ClearRoomPositionOffset();

  /// @brief Method DeregisterSpeakingVolumeUpdatedCallback, addr 0xf2f1e0, size 0x1f0, virtual false, abstract: false, final false
  static inline void DeregisterSpeakingVolumeUpdatedCallback(::StringW userID, ::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated* callback);

  /// @brief Method DeregisterVoiceChatSource, addr 0xf2f514, size 0xac, virtual false, abstract: false, final false
  inline void DeregisterVoiceChatSource(::GlobalNamespace::VoiceChatSource* source);

  /// @brief Method ForceDisconnect, addr 0xf2d5b0, size 0x144, virtual false, abstract: false, final false
  inline void ForceDisconnect();

  /// @brief Method GetCurrentMuteState, addr 0xf2f88c, size 0xac, virtual false, abstract: false, final false
  inline void GetCurrentMuteState(ByRef<bool> isSelfMuted, ByRef<::System::Collections::Generic::List_1<::StringW>*> mutedUserIDs);

  /// @brief Method GetCurrentSelfForceMutedState, addr 0xf2f674, size 0x8, virtual false, abstract: false, final false
  inline bool GetCurrentSelfForceMutedState();

  /// @brief Method GetLogState, addr 0xf30b5c, size 0x3b4, virtual false, abstract: false, final false
  inline ::StringW GetLogState();

  /// @brief Method Initialize, addr 0xf2c408, size 0x9c, virtual false, abstract: false, final false
  inline void Initialize(::StringW userID);

  /// @brief Method IsUserMuted, addr 0xf307a4, size 0x80, virtual false, abstract: false, final false
  inline bool IsUserMuted(::StringW userID);

  /// @brief Method JoinPhotonRoomVoiceChannelOnDelay, addr 0xf2cd84, size 0x9c, virtual false, abstract: false, final false
  inline void JoinPhotonRoomVoiceChannelOnDelay(::StringW roomName);

  /// @brief Method JoinPositionalChannel, addr 0xf2cccc, size 0xa8, virtual false, abstract: false, final false
  inline void JoinPositionalChannel(::StringW channelName, bool isPrivate);

  /// @brief Method LogoutAsync, addr 0xf2c4a8, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* LogoutAsync();

  static inline ::GlobalNamespace::VoiceChatManager* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0xf2c4a4, size 0x4, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnAudioFilterRead, addr 0xf30aa0, size 0xbc, virtual false, abstract: false, final false
  inline void OnAudioFilterRead(::ArrayW<float_t, ::Array<float_t>*> data, int32_t channels);

  /// @brief Method OnAwake, addr 0xf2b8c0, size 0x1a8, virtual true, abstract: false, final false
  inline void OnAwake();

  /// @brief Method OnChannelJoined, addr 0xf2d6f4, size 0x730, virtual false, abstract: false, final false
  inline void OnChannelJoined(::StringW channelName);

  /// @brief Method OnChannelLeft, addr 0xf2de24, size 0x2fc, virtual false, abstract: false, final false
  inline void OnChannelLeft(::StringW channelName);

  /// @brief Method OnJoinedPhotonRoom, addr 0xf2cd74, size 0x10, virtual false, abstract: false, final false
  inline void OnJoinedPhotonRoom(::StringW roomName);

  /// @brief Method OnLeftPhotonRoom, addr 0xf2ce20, size 0x164, virtual false, abstract: false, final false
  inline void OnLeftPhotonRoom();

  /// @brief Method OnLinkedAccountCountUpdated, addr 0xf2c290, size 0x6c, virtual false, abstract: false, final false
  inline void OnLinkedAccountCountUpdated(int32_t newLinkedAccountCount, bool wasIncrease);

  /// @brief Method OnLocalAudioEnergyUpdated, addr 0xf2ef3c, size 0x110, virtual false, abstract: false, final false
  inline void OnLocalAudioEnergyUpdated(float_t newEnergy);

  /// @brief Method OnMasterPlayerCreated, addr 0xf2e468, size 0x8, virtual false, abstract: false, final false
  inline void OnMasterPlayerCreated(::GlobalNamespace::Player* player);

  /// @brief Method OnOnlineUserIDAssigned, addr 0xf2c384, size 0x84, virtual false, abstract: false, final false
  inline void OnOnlineUserIDAssigned(::StringW userID);

  /// @brief Method OnParticipantAdded, addr 0xf2e1e8, size 0x1b0, virtual false, abstract: false, final false
  inline void OnParticipantAdded(::Unity::Services::Vivox::VivoxParticipant* participant);

  /// @brief Method OnParticipantRemoved, addr 0xf2e398, size 0xbc, virtual false, abstract: false, final false
  inline void OnParticipantRemoved(::Unity::Services::Vivox::VivoxParticipant* participant);

  /// @brief Method OnReceiveMutedUserSync, addr 0xf30824, size 0xf0, virtual false, abstract: false, final false
  inline void OnReceiveMutedUserSync(::System::Collections::Generic::List_1<::StringW>* mutedUserIDs);

  /// @brief Method OnRoomLoaded, addr 0xf2c150, size 0x140, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* room);

  /// @brief Method OnRoomUnloaded, addr 0xf2d150, size 0x4, virtual false, abstract: false, final false
  inline void OnRoomUnloaded();

  /// @brief Method OnUserIDAssigned, addr 0xf2c2fc, size 0x88, virtual false, abstract: false, final false
  inline void OnUserIDAssigned();

  /// @brief Method OnUserLoggedIn, addr 0xf2d494, size 0x8c, virtual false, abstract: false, final false
  inline void OnUserLoggedIn();

  /// @brief Method OnUserLoggedOut, addr 0xf2d548, size 0x68, virtual false, abstract: false, final false
  inline void OnUserLoggedOut();

  /// @brief Method RegisterSpeakingVolumeUpdatedCallback, addr 0xf2f06c, size 0x174, virtual false, abstract: false, final false
  static inline void RegisterSpeakingVolumeUpdatedCallback(::StringW userID, ::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated* callback);

  /// @brief Method RegisterVoiceChatSource, addr 0xf2f3d0, size 0x144, virtual false, abstract: false, final false
  inline void RegisterVoiceChatSource(::GlobalNamespace::VoiceChatSource* source);

  /// @brief Method SendMutedUserSync, addr 0xf2fc9c, size 0x19c, virtual false, abstract: false, final false
  inline void SendMutedUserSync();

  /// @brief Method SetCurrentChannel, addr 0xf2bac8, size 0xe4, virtual false, abstract: false, final false
  inline void SetCurrentChannel(::StringW newChannelName);

  /// @brief Method SetMuteSelf, addr 0xf2bbac, size 0xa0, virtual false, abstract: false, final false
  inline void SetMuteSelf(bool newMuted);

  /// @brief Method SetMutedUserIDs, addr 0xf2fe38, size 0x53c, virtual false, abstract: false, final false
  inline void SetMutedUserIDs(::System::Collections::Generic::List_1<::StringW>* newMutedUserIDs);

  /// @brief Method SetPendingJoinChannel, addr 0xf2e120, size 0x34, virtual false, abstract: false, final false
  inline void SetPendingJoinChannel(::StringW channelName, bool isPrivate);

  /// @brief Method SetRoomPositionOffset, addr 0xf2cf84, size 0x11c, virtual false, abstract: false, final false
  inline void SetRoomPositionOffset(::UnityEngine::Vector2 roomNodePosition);

  /// @brief Method SetSelfForceMuted, addr 0xf2f67c, size 0x210, virtual false, abstract: false, final false
  inline void SetSelfForceMuted(bool newState);

  /// @brief Method SetUserMuted, addr 0xf2fa1c, size 0x280, virtual false, abstract: false, final false
  inline void SetUserMuted(::StringW userID, bool newMuted);

  /// @brief Method SetupForLogin, addr 0xf2d154, size 0x338, virtual false, abstract: false, final false
  inline void SetupForLogin(::StringW userID);

  /// @brief Method Start, addr 0xf2bc4c, size 0x504, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ToggleMuteSelf, addr 0xf243f4, size 0x98, virtual false, abstract: false, final false
  inline void ToggleMuteSelf();

  /// @brief Method ToggleUserMuted, addr 0xf2f938, size 0xe4, virtual false, abstract: false, final false
  inline void ToggleUserMuted(::StringW userID);

  /// @brief Method TryConnectToAwaitingChannel, addr 0xf2d520, size 0x28, virtual false, abstract: false, final false
  inline void TryConnectToAwaitingChannel();

  /// @brief Method TryConnectToVoiceChannel, addr 0xf2c5a0, size 0x554, virtual false, abstract: false, final false
  inline void TryConnectToVoiceChannel(::StringW channelName, bool isPrivate);

  /// @brief Method TryGetChannelParticipant, addr 0xf30374, size 0x430, virtual false, abstract: false, final false
  inline bool TryGetChannelParticipant(::StringW userID, ByRef<::Unity::Services::Vivox::VivoxParticipant*> participant);

  /// @brief Method TryGetVoiceChannelName, addr 0xf30914, size 0x18c, virtual false, abstract: false, final false
  static inline bool TryGetVoiceChannelName(ByRef<::StringW> channelName);

  /// @brief Method TryInitializeVoiceChatPermissions, addr 0xf2ba68, size 0x60, virtual false, abstract: false, final false
  static inline void TryInitializeVoiceChatPermissions();

  /// @brief Method TryLeaveCurrentChannel, addr 0xf2cb94, size 0x138, virtual false, abstract: false, final false
  inline void TryLeaveCurrentChannel();

  /// @brief Method TryLogin, addr 0xf2cb00, size 0x94, virtual false, abstract: false, final false
  inline void TryLogin();

  /// @brief Method TryLogout, addr 0xf2d48c, size 0x8, virtual false, abstract: false, final false
  inline void TryLogout();

  /// @brief Method TryRejoinPendingJoinChannel, addr 0xf2e154, size 0x94, virtual false, abstract: false, final false
  inline void TryRejoinPendingJoinChannel();

  /// @brief Method Update, addr 0xf2e470, size 0xacc, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__hasRoomPositionOffset_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasRoomPositionOffset_k__BackingField();

  constexpr bool const& __cordl_internal_get__isInChannel_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isInChannel_k__BackingField();

  constexpr bool const& __cordl_internal_get_awaitingChannelIsPrivate() const;

  constexpr bool& __cordl_internal_get_awaitingChannelIsPrivate();

  constexpr ::StringW const& __cordl_internal_get_awaitingChannelName() const;

  constexpr ::StringW& __cordl_internal_get_awaitingChannelName();

  constexpr ::UnityW<::GlobalNamespace::VoiceChatSource> const& __cordl_internal_get_curVoiceChatSource() const;

  constexpr ::UnityW<::GlobalNamespace::VoiceChatSource>& __cordl_internal_get_curVoiceChatSource();

  constexpr ::Unity::Services::Vivox::VivoxInputDevice*& __cordl_internal_get_defaultDevice();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::VivoxInputDevice*> const& __cordl_internal_get_defaultDevice() const;

  constexpr bool const& __cordl_internal_get_isInToxModSession() const;

  constexpr bool& __cordl_internal_get_isInToxModSession();

  constexpr bool const& __cordl_internal_get_isLoggingIn() const;

  constexpr bool& __cordl_internal_get_isLoggingIn();

  constexpr bool const& __cordl_internal_get_isSelfForceMuted() const;

  constexpr bool& __cordl_internal_get_isSelfForceMuted();

  constexpr ::Unity::Services::Vivox::LoginOptions*& __cordl_internal_get_loginOptions();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::LoginOptions*> const& __cordl_internal_get_loginOptions() const;

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_masterPlayer();

  constexpr float_t const& __cordl_internal_get_nextInternetCheckTime() const;

  constexpr float_t& __cordl_internal_get_nextInternetCheckTime();

  constexpr float_t const& __cordl_internal_get_nextPositionUpdateTime() const;

  constexpr float_t& __cordl_internal_get_nextPositionUpdateTime();

  constexpr float_t const& __cordl_internal_get_nextReconnectTime() const;

  constexpr float_t& __cordl_internal_get_nextReconnectTime();

  constexpr ::Unity::Services::Vivox::VivoxInputDevice*& __cordl_internal_get_noDevice();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::VivoxInputDevice*> const& __cordl_internal_get_noDevice() const;

  constexpr bool const& __cordl_internal_get_pendingJoinChannelIsPrivate() const;

  constexpr bool& __cordl_internal_get_pendingJoinChannelIsPrivate();

  constexpr ::StringW const& __cordl_internal_get_pendingJoinChannelName() const;

  constexpr ::StringW& __cordl_internal_get_pendingJoinChannelName();

  constexpr ::StringW const& __cordl_internal_get_persistantChannelName() const;

  constexpr ::StringW& __cordl_internal_get_persistantChannelName();

  constexpr ::Unity::Services::Vivox::Channel3DProperties*& __cordl_internal_get_privateWorldChannel3DProperties();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Channel3DProperties*> const& __cordl_internal_get_privateWorldChannel3DProperties() const;

  constexpr ::Unity::Services::Vivox::Channel3DProperties*& __cordl_internal_get_publicWorldChannel3DProperties();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Channel3DProperties*> const& __cordl_internal_get_publicWorldChannel3DProperties() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_roomPositionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_roomPositionOffset();

  constexpr bool const& __cordl_internal_get_shouldUseToxModInSession() const;

  constexpr bool& __cordl_internal_get_shouldUseToxModInSession();

  constexpr bool const& __cordl_internal_get_shouldVoiceChatPersistBetweenPhotonRooms() const;

  constexpr bool& __cordl_internal_get_shouldVoiceChatPersistBetweenPhotonRooms();

  constexpr ::GlobalNamespace::ToxModVivoxHelper*& __cordl_internal_get_toxModHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ToxModVivoxHelper*> const& __cordl_internal_get_toxModHelper() const;

  constexpr int32_t const& __cordl_internal_get_toxModSampleRate() const;

  constexpr int32_t& __cordl_internal_get_toxModSampleRate();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VoiceChatSource>>*& __cordl_internal_get_voiceChatSources();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VoiceChatSource>>*> const& __cordl_internal_get_voiceChatSources() const;

  constexpr bool const& __cordl_internal_get_wasUnmutedBeforeForceMute() const;

  constexpr bool& __cordl_internal_get_wasUnmutedBeforeForceMute();

  constexpr void __cordl_internal_set__hasRoomPositionOffset_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isInChannel_k__BackingField(bool value);

  constexpr void __cordl_internal_set_awaitingChannelIsPrivate(bool value);

  constexpr void __cordl_internal_set_awaitingChannelName(::StringW value);

  constexpr void __cordl_internal_set_curVoiceChatSource(::UnityW<::GlobalNamespace::VoiceChatSource> value);

  constexpr void __cordl_internal_set_defaultDevice(::Unity::Services::Vivox::VivoxInputDevice* value);

  constexpr void __cordl_internal_set_isInToxModSession(bool value);

  constexpr void __cordl_internal_set_isLoggingIn(bool value);

  constexpr void __cordl_internal_set_isSelfForceMuted(bool value);

  constexpr void __cordl_internal_set_loginOptions(::Unity::Services::Vivox::LoginOptions* value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::Player> value);

  constexpr void __cordl_internal_set_nextInternetCheckTime(float_t value);

  constexpr void __cordl_internal_set_nextPositionUpdateTime(float_t value);

  constexpr void __cordl_internal_set_nextReconnectTime(float_t value);

  constexpr void __cordl_internal_set_noDevice(::Unity::Services::Vivox::VivoxInputDevice* value);

  constexpr void __cordl_internal_set_pendingJoinChannelIsPrivate(bool value);

  constexpr void __cordl_internal_set_pendingJoinChannelName(::StringW value);

  constexpr void __cordl_internal_set_persistantChannelName(::StringW value);

  constexpr void __cordl_internal_set_privateWorldChannel3DProperties(::Unity::Services::Vivox::Channel3DProperties* value);

  constexpr void __cordl_internal_set_publicWorldChannel3DProperties(::Unity::Services::Vivox::Channel3DProperties* value);

  constexpr void __cordl_internal_set_roomPositionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_shouldUseToxModInSession(bool value);

  constexpr void __cordl_internal_set_shouldVoiceChatPersistBetweenPhotonRooms(bool value);

  constexpr void __cordl_internal_set_toxModHelper(::GlobalNamespace::ToxModVivoxHelper* value);

  constexpr void __cordl_internal_set_toxModSampleRate(int32_t value);

  constexpr void __cordl_internal_set_voiceChatSources(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VoiceChatSource>>* value);

  constexpr void __cordl_internal_set_wasUnmutedBeforeForceMute(bool value);

  /// @brief Method .ctor, addr 0xf30f10, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF__currentChannelName_k__BackingField();

  static inline bool getStaticF__isSelfMuted_k__BackingField();

  static inline bool getStaticF_canUseToxMod();

  static inline bool getStaticF_isInitialized();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_mutedUserIDs();

  static inline ::GlobalNamespace::__VoiceChatManager__OnChannelStateChangedCallback* getStaticF_onChannelJoinedPersistentCallbacks();

  static inline ::GlobalNamespace::__VoiceChatManager__OnChannelStateChangedCallback* getStaticF_onChannelLeftPersistentCallbacks();

  static inline ::GlobalNamespace::__VoiceChatManager__OnGlobalMutedStateChangedCallback* getStaticF_onGlobalMutedStateChangedCallbacks();

  static inline ::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated* getStaticF_onLocalSpeakingVolumeUpdatedCallback();

  static inline ::GlobalNamespace::__VoiceChatManager__OnSelfForceMutedStateChangedCallback* getStaticF_onSelfForceMutedStateChangedCallbacks();

  static inline ::GlobalNamespace::__VoiceChatManager__OnSelfMutedStateChangedCallback* getStaticF_onSelfMutedStateChangedCallbacks();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated*>* getStaticF_onSpeakingVolumeUpdatedCallbacks();

  static inline ::GlobalNamespace::__VoiceChatManager__OnUserMutedStateChangedCallback* getStaticF_onUserMutedStateChangedCallbacks();

  static inline bool getStaticF_waitingToInitialize();

  /// @brief Method get_currentChannelName, addr 0xf2b80c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW get_currentChannelName();

  /// @brief Method get_hasRoomPositionOffset, addr 0xf2e454, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasRoomPositionOffset();

  /// @brief Method get_isInChannel, addr 0xf2b7f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInChannel();

  /// @brief Method get_isSelfMuted, addr 0xf2f5c0, size 0x58, virtual false, abstract: false, final false
  static inline bool get_isSelfMuted();

  static inline void setStaticF__currentChannelName_k__BackingField(::StringW value);

  static inline void setStaticF__isSelfMuted_k__BackingField(bool value);

  static inline void setStaticF_canUseToxMod(bool value);

  static inline void setStaticF_isInitialized(bool value);

  static inline void setStaticF_mutedUserIDs(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_onChannelJoinedPersistentCallbacks(::GlobalNamespace::__VoiceChatManager__OnChannelStateChangedCallback* value);

  static inline void setStaticF_onChannelLeftPersistentCallbacks(::GlobalNamespace::__VoiceChatManager__OnChannelStateChangedCallback* value);

  static inline void setStaticF_onGlobalMutedStateChangedCallbacks(::GlobalNamespace::__VoiceChatManager__OnGlobalMutedStateChangedCallback* value);

  static inline void setStaticF_onLocalSpeakingVolumeUpdatedCallback(::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated* value);

  static inline void setStaticF_onSelfForceMutedStateChangedCallbacks(::GlobalNamespace::__VoiceChatManager__OnSelfForceMutedStateChangedCallback* value);

  static inline void setStaticF_onSelfMutedStateChangedCallbacks(::GlobalNamespace::__VoiceChatManager__OnSelfMutedStateChangedCallback* value);

  static inline void setStaticF_onSpeakingVolumeUpdatedCallbacks(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated*>* value);

  static inline void setStaticF_onUserMutedStateChangedCallbacks(::GlobalNamespace::__VoiceChatManager__OnUserMutedStateChangedCallback* value);

  static inline void setStaticF_waitingToInitialize(bool value);

  /// @brief Method set_currentChannelName, addr 0xf2b864, size 0x5c, virtual false, abstract: false, final false
  static inline void set_currentChannelName(::StringW value);

  /// @brief Method set_hasRoomPositionOffset, addr 0xf2e45c, size 0xc, virtual false, abstract: false, final false
  inline void set_hasRoomPositionOffset(bool value);

  /// @brief Method set_isInChannel, addr 0xf2b800, size 0xc, virtual false, abstract: false, final false
  inline void set_isInChannel(bool value);

  /// @brief Method set_isSelfMuted, addr 0xf2f618, size 0x5c, virtual false, abstract: false, final false
  static inline void set_isSelfMuted(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VoiceChatManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VoiceChatManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VoiceChatManager(VoiceChatManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VoiceChatManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VoiceChatManager(VoiceChatManager const&) = delete;

  /// @brief Field awaitingChannelName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___awaitingChannelName;

  /// @brief Field awaitingChannelIsPrivate, offset: 0x20, size: 0x1, def value: None
  bool ___awaitingChannelIsPrivate;

  /// @brief Field loginOptions, offset: 0x28, size: 0x8, def value: None
  ::Unity::Services::Vivox::LoginOptions* ___loginOptions;

  /// @brief Field publicWorldChannel3DProperties, offset: 0x30, size: 0x8, def value: None
  ::Unity::Services::Vivox::Channel3DProperties* ___publicWorldChannel3DProperties;

  /// @brief Field privateWorldChannel3DProperties, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::Channel3DProperties* ___privateWorldChannel3DProperties;

  /// @brief Field noDevice, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxInputDevice* ___noDevice;

  /// @brief Field defaultDevice, offset: 0x48, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxInputDevice* ___defaultDevice;

  /// @brief Field <isInChannel>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____isInChannel_k__BackingField;

  /// @brief Field shouldVoiceChatPersistBetweenPhotonRooms, offset: 0x51, size: 0x1, def value: None
  bool ___shouldVoiceChatPersistBetweenPhotonRooms;

  /// @brief Field persistantChannelName, offset: 0x58, size: 0x8, def value: None
  ::StringW ___persistantChannelName;

  /// @brief Field toxModHelper, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ToxModVivoxHelper* ___toxModHelper;

  /// @brief Field shouldUseToxModInSession, offset: 0x68, size: 0x1, def value: None
  bool ___shouldUseToxModInSession;

  /// @brief Field isInToxModSession, offset: 0x69, size: 0x1, def value: None
  bool ___isInToxModSession;

  /// @brief Field isLoggingIn, offset: 0x6a, size: 0x1, def value: None
  bool ___isLoggingIn;

  /// @brief Field pendingJoinChannelName, offset: 0x70, size: 0x8, def value: None
  ::StringW ___pendingJoinChannelName;

  /// @brief Field pendingJoinChannelIsPrivate, offset: 0x78, size: 0x1, def value: None
  bool ___pendingJoinChannelIsPrivate;

  /// @brief Field nextReconnectTime, offset: 0x7c, size: 0x4, def value: None
  float_t ___nextReconnectTime;

  /// @brief Field roomPositionOffset, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___roomPositionOffset;

  /// @brief Field <hasRoomPositionOffset>k__BackingField, offset: 0x8c, size: 0x1, def value: None
  bool ____hasRoomPositionOffset_k__BackingField;

  /// @brief Field masterPlayer, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___masterPlayer;

  /// @brief Field nextPositionUpdateTime, offset: 0x98, size: 0x4, def value: None
  float_t ___nextPositionUpdateTime;

  /// @brief Field nextInternetCheckTime, offset: 0x9c, size: 0x4, def value: None
  float_t ___nextInternetCheckTime;

  /// @brief Field voiceChatSources, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VoiceChatSource>>* ___voiceChatSources;

  /// @brief Field curVoiceChatSource, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VoiceChatSource> ___curVoiceChatSource;

  /// @brief Field wasUnmutedBeforeForceMute, offset: 0xb0, size: 0x1, def value: None
  bool ___wasUnmutedBeforeForceMute;

  /// @brief Field isSelfForceMuted, offset: 0xb1, size: 0x1, def value: None
  bool ___isSelfForceMuted;

  /// @brief Field toxModSampleRate, offset: 0xb4, size: 0x4, def value: None
  int32_t ___toxModSampleRate;

  /// @brief Field DELAY offset 0xffffffff size 0x4
  static constexpr int32_t DELAY{ static_cast<int32_t>(0x5dc) };

  /// @brief Field VOICE_CHAT_RECONNECT_DELAY offset 0xffffffff size 0x4
  static constexpr float_t VOICE_CHAT_RECONNECT_DELAY{ 35.0 };

  /// @brief Field audioFadeModel value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::AudioFadeModel const audioFadeModel;

  /// @brief Field conversationDistance offset 0xffffffff size 0x4
  static constexpr int32_t conversationDistance{ static_cast<int32_t>(0x3) };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Voice Chat: " };

  /// @brief Field disableVoiceChatInEditor offset 0xffffffff size 0x1
  static constexpr bool disableVoiceChatInEditor{ true };

  /// @brief Field domain offset 0xffffffff size 0x8
  static constexpr ::ConstString domain{ u"mtu1xp.vivox.com" };

  /// @brief Field illegalVivoxCharacter offset 0xffffffff size 0x2
  static constexpr char16_t illegalVivoxCharacter{ u'_' };

  /// @brief Field issuer offset 0xffffffff size 0x8
  static constexpr ::ConstString issuer{ u"13753-aster-86456-udash" };

  /// @brief Field legalVivoxCharacters offset 0xffffffff size 0x8
  static constexpr ::ConstString legalVivoxCharacters{ u"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };

  /// @brief Field logPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString logPreface{ u"Voice" };

  /// @brief Field privateWorldAudibleDistance offset 0xffffffff size 0x4
  static constexpr int32_t privateWorldAudibleDistance{ static_cast<int32_t>(0xae) };

  /// @brief Field privateWorldAudioFadeIntensityByDistance offset 0xffffffff size 0x4
  static constexpr float_t privateWorldAudioFadeIntensityByDistance{ 0.55 };

  /// @brief Field publicWorldAudibleDistance offset 0xffffffff size 0x4
  static constexpr int32_t publicWorldAudibleDistance{ static_cast<int32_t>(0x4c) };

  /// @brief Field publicWorldAudioFadeIntensityByDistance offset 0xffffffff size 0x4
  static constexpr float_t publicWorldAudioFadeIntensityByDistance{ 1.25 };

  /// @brief Field roomWidth offset 0xffffffff size 0x4
  static constexpr float_t roomWidth{ 50.0 };

  /// @brief Field server offset 0xffffffff size 0x8
  static constexpr ::ConstString server{ u"https://unity.vivox.com/appconfig/13753-aster-86456-udash" };

  /// @brief Field timeBetweenInternetChecks offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenInternetChecks{ 1.0 };

  /// @brief Field timeBetweenPositionUpdates offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenPositionUpdates{ 0.33333334 };

  /// @brief Field tokenKey offset 0xffffffff size 0x8
  static constexpr ::ConstString tokenKey{ u"5hamRtIlsdVLWjKNeJuSXFmgNKzt52dA" };

  /// @brief Field toxModAPIKey offset 0xffffffff size 0x8
  static constexpr ::ConstString toxModAPIKey{ u"f4dce933-8fa5-4629-8a04-e9f918d4eb1b" };

  /// @brief Field toxModAccountUUID offset 0xffffffff size 0x8
  static constexpr ::ConstString toxModAccountUUID{ u"4598a97a-77d5-4b00-89fc-96e2055377ce" };

  /// @brief Field volumeBoost offset 0xffffffff size 0x4
  static constexpr int32_t volumeBoost{ static_cast<int32_t>(0x5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VoiceChatManager, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___awaitingChannelName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___awaitingChannelIsPrivate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___loginOptions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___publicWorldChannel3DProperties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___privateWorldChannel3DProperties) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___noDevice) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___defaultDevice) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ____isInChannel_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___shouldVoiceChatPersistBetweenPhotonRooms) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___persistantChannelName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___toxModHelper) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___shouldUseToxModInSession) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___isInToxModSession) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___isLoggingIn) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___pendingJoinChannelName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___pendingJoinChannelIsPrivate) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___nextReconnectTime) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___roomPositionOffset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ____hasRoomPositionOffset_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___masterPlayer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___nextPositionUpdateTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___nextInternetCheckTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___voiceChatSources) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___curVoiceChatSource) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___wasUnmutedBeforeForceMute) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___isSelfForceMuted) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceChatManager, ___toxModSampleRate) == 0xb4, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VoiceChatManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VoiceChatManager*, "", "VoiceChatManager");
NEED_NO_BOX(::GlobalNamespace::__VoiceChatManager__OnChannelStateChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager__OnChannelStateChangedCallback*, "", "VoiceChatManager/OnChannelStateChangedCallback");
NEED_NO_BOX(::GlobalNamespace::__VoiceChatManager__OnGlobalMutedStateChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager__OnGlobalMutedStateChangedCallback*, "", "VoiceChatManager/OnGlobalMutedStateChangedCallback");
NEED_NO_BOX(::GlobalNamespace::__VoiceChatManager__OnSelfForceMutedStateChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager__OnSelfForceMutedStateChangedCallback*, "", "VoiceChatManager/OnSelfForceMutedStateChangedCallback");
NEED_NO_BOX(::GlobalNamespace::__VoiceChatManager__OnSelfMutedStateChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager__OnSelfMutedStateChangedCallback*, "", "VoiceChatManager/OnSelfMutedStateChangedCallback");
NEED_NO_BOX(::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager__OnSpeakingVolumeUpdated*, "", "VoiceChatManager/OnSpeakingVolumeUpdated");
NEED_NO_BOX(::GlobalNamespace::__VoiceChatManager__OnUserMutedStateChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager__OnUserMutedStateChangedCallback*, "", "VoiceChatManager/OnUserMutedStateChangedCallback");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager___Initialize_d__44, "", "VoiceChatManager/<Initialize>d__44");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager___JoinPhotonRoomVoiceChannelOnDelay_d__50, "", "VoiceChatManager/<JoinPhotonRoomVoiceChannelOnDelay>d__50");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager___JoinPositionalChannel_d__61, "", "VoiceChatManager/<JoinPositionalChannel>d__61");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager___LogoutAsync_d__46, "", "VoiceChatManager/<LogoutAsync>d__46");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager___SetMuteSelf_d__122, "", "VoiceChatManager/<SetMuteSelf>d__122");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager___TryLogin_d__56, "", "VoiceChatManager/<TryLogin>d__56");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VoiceChatManager___TryRejoinPendingJoinChannel_d__75, "", "VoiceChatManager/<TryRejoinPendingJoinChannel>d__75");
