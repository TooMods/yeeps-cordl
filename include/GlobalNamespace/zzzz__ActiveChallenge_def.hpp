#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ChallengeData_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ActiveChallenge)
namespace GlobalNamespace {
struct ChallengeData;
}
namespace GlobalNamespace {
class __ActiveChallenge__OnCompleted;
}
namespace GlobalNamespace {
class __ActiveChallenge__OnProgressUpdated;
}
namespace GlobalNamespace {
class __ActiveChallenge__OnRedeemed;
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
class ActiveChallenge;
}
namespace GlobalNamespace {
class __ActiveChallenge__OnCompleted;
}
namespace GlobalNamespace {
class __ActiveChallenge__OnProgressUpdated;
}
namespace GlobalNamespace {
class __ActiveChallenge__OnRedeemed;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ActiveChallenge);
MARK_REF_PTR_T(::GlobalNamespace::__ActiveChallenge__OnCompleted);
MARK_REF_PTR_T(::GlobalNamespace::__ActiveChallenge__OnProgressUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__ActiveChallenge__OnRedeemed);
// Type: ::OnProgressUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ActiveChallenge::OnProgressUpdated*
class CORDL_TYPE __ActiveChallenge__OnProgressUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2759bd8, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t progress, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2759c5c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2759bc4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t progress);

  static inline ::GlobalNamespace::__ActiveChallenge__OnProgressUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2758798, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ActiveChallenge__OnProgressUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ActiveChallenge__OnProgressUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ActiveChallenge__OnProgressUpdated(__ActiveChallenge__OnProgressUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ActiveChallenge__OnProgressUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ActiveChallenge__OnProgressUpdated(__ActiveChallenge__OnProgressUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ActiveChallenge__OnProgressUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnCompleted
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ActiveChallenge::OnCompleted*
class CORDL_TYPE __ActiveChallenge__OnCompleted : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2759c7c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2759c9c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2759c68, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__ActiveChallenge__OnCompleted* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x275885c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ActiveChallenge__OnCompleted();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ActiveChallenge__OnCompleted", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ActiveChallenge__OnCompleted(__ActiveChallenge__OnCompleted&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ActiveChallenge__OnCompleted", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ActiveChallenge__OnCompleted(__ActiveChallenge__OnCompleted const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ActiveChallenge__OnCompleted, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnRedeemed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ActiveChallenge::OnRedeemed*
class CORDL_TYPE __ActiveChallenge__OnRedeemed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2759cbc, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t reward, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2759d40, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2759ca8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t reward);

  static inline ::GlobalNamespace::__ActiveChallenge__OnRedeemed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2758918, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ActiveChallenge__OnRedeemed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ActiveChallenge__OnRedeemed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ActiveChallenge__OnRedeemed(__ActiveChallenge__OnRedeemed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ActiveChallenge__OnRedeemed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ActiveChallenge__OnRedeemed(__ActiveChallenge__OnRedeemed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ActiveChallenge__OnRedeemed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ActiveChallenge
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ActiveChallenge*
class CORDL_TYPE ActiveChallenge : public ::System::Object {
public:
  // Declarations
  using OnCompleted = ::GlobalNamespace::__ActiveChallenge__OnCompleted;

  using OnProgressUpdated = ::GlobalNamespace::__ActiveChallenge__OnProgressUpdated;

  using OnRedeemed = ::GlobalNamespace::__ActiveChallenge__OnRedeemed;

  /// @brief Field <challengeData>k__BackingField, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get__challengeData_k__BackingField,
                      put = __cordl_internal_set__challengeData_k__BackingField))::GlobalNamespace::ChallengeData _challengeData_k__BackingField;

  /// @brief Field <hasBeenRedeemed>k__BackingField, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__hasBeenRedeemed_k__BackingField, put = __cordl_internal_set__hasBeenRedeemed_k__BackingField)) bool _hasBeenRedeemed_k__BackingField;

  /// @brief Field <isCompleted>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__isCompleted_k__BackingField, put = __cordl_internal_set__isCompleted_k__BackingField)) bool _isCompleted_k__BackingField;

  /// @brief Field <poolKey>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__poolKey_k__BackingField, put = __cordl_internal_set__poolKey_k__BackingField))::StringW _poolKey_k__BackingField;

  /// @brief Field <progress>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__progress_k__BackingField, put = __cordl_internal_set__progress_k__BackingField)) int32_t _progress_k__BackingField;

  /// @brief Field <reward>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__reward_k__BackingField, put = __cordl_internal_set__reward_k__BackingField)) int32_t _reward_k__BackingField;

  __declspec(property(get = get_challengeData, put = set_challengeData))::GlobalNamespace::ChallengeData challengeData;

  __declspec(property(get = get_hasBeenRedeemed, put = set_hasBeenRedeemed)) bool hasBeenRedeemed;

  /// @brief Field hasRedeemBeenInitiated, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get_hasRedeemBeenInitiated, put = __cordl_internal_set_hasRedeemBeenInitiated)) bool hasRedeemBeenInitiated;

  __declspec(property(get = get_isCompleted, put = set_isCompleted)) bool isCompleted;

  /// @brief Field onCompletedCallbacks, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_onCompletedCallbacks, put = __cordl_internal_set_onCompletedCallbacks))::GlobalNamespace::__ActiveChallenge__OnCompleted* onCompletedCallbacks;

  /// @brief Field onProgressUpdatedCallbacks, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_onProgressUpdatedCallbacks,
                      put = __cordl_internal_set_onProgressUpdatedCallbacks))::GlobalNamespace::__ActiveChallenge__OnProgressUpdated* onProgressUpdatedCallbacks;

  /// @brief Field onRedeemedCallbacks, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_onRedeemedCallbacks, put = __cordl_internal_set_onRedeemedCallbacks))::GlobalNamespace::__ActiveChallenge__OnRedeemed* onRedeemedCallbacks;

  __declspec(property(get = get_poolKey, put = set_poolKey))::StringW poolKey;

  __declspec(property(get = get_progress, put = set_progress)) int32_t progress;

  __declspec(property(get = get_reward, put = set_reward)) int32_t reward;

  /// @brief Field trackedStatKey, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_trackedStatKey, put = __cordl_internal_set_trackedStatKey))::StringW trackedStatKey;

  /// @brief Method Complete, addr 0x2759128, size 0x250, virtual false, abstract: false, final false
  inline void Complete(bool fromLoad);

  /// @brief Method GetProgressRatio, addr 0x2758b34, size 0x80, virtual false, abstract: false, final false
  inline float_t GetProgressRatio();

  /// @brief Method InitiateRedeem, addr 0x2758c08, size 0x310, virtual false, abstract: false, final false
  inline void InitiateRedeem();

  static inline ::GlobalNamespace::ActiveChallenge* New_ctor(::GlobalNamespace::ChallengeData challengeData, ::StringW poolKey, int32_t reward, bool hasBeenRedeemed);

  /// @brief Method OnExpired, addr 0x2759378, size 0xc0, virtual false, abstract: false, final false
  inline void OnExpired();

  /// @brief Method Redeem, addr 0x27597bc, size 0x1fc, virtual false, abstract: false, final false
  inline void Redeem(int32_t rewardAmount);

  /// @brief Method SetProgress, addr 0x2759438, size 0x12c, virtual false, abstract: false, final false
  inline void SetProgress(int32_t amount);

  /// @brief Method <InitiateRedeem>b__38_0, addr 0x27599b8, size 0xd4, virtual false, abstract: false, final false
  inline void _InitiateRedeem_b__38_0(int32_t rewardAmount);

  /// @brief Method <InitiateRedeem>b__38_1, addr 0x2759a8c, size 0x138, virtual false, abstract: false, final false
  inline void _InitiateRedeem_b__38_1(::StringW errorType);

  constexpr ::GlobalNamespace::ChallengeData const& __cordl_internal_get__challengeData_k__BackingField() const;

  constexpr ::GlobalNamespace::ChallengeData& __cordl_internal_get__challengeData_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasBeenRedeemed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasBeenRedeemed_k__BackingField();

  constexpr bool const& __cordl_internal_get__isCompleted_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isCompleted_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__poolKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__poolKey_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__progress_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__progress_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__reward_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__reward_k__BackingField();

  constexpr bool const& __cordl_internal_get_hasRedeemBeenInitiated() const;

  constexpr bool& __cordl_internal_get_hasRedeemBeenInitiated();

  constexpr ::GlobalNamespace::__ActiveChallenge__OnCompleted*& __cordl_internal_get_onCompletedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ActiveChallenge__OnCompleted*> const& __cordl_internal_get_onCompletedCallbacks() const;

  constexpr ::GlobalNamespace::__ActiveChallenge__OnProgressUpdated*& __cordl_internal_get_onProgressUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ActiveChallenge__OnProgressUpdated*> const& __cordl_internal_get_onProgressUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__ActiveChallenge__OnRedeemed*& __cordl_internal_get_onRedeemedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ActiveChallenge__OnRedeemed*> const& __cordl_internal_get_onRedeemedCallbacks() const;

  constexpr ::StringW const& __cordl_internal_get_trackedStatKey() const;

  constexpr ::StringW& __cordl_internal_get_trackedStatKey();

  constexpr void __cordl_internal_set__challengeData_k__BackingField(::GlobalNamespace::ChallengeData value);

  constexpr void __cordl_internal_set__hasBeenRedeemed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isCompleted_k__BackingField(bool value);

  constexpr void __cordl_internal_set__poolKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__progress_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__reward_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_hasRedeemBeenInitiated(bool value);

  constexpr void __cordl_internal_set_onCompletedCallbacks(::GlobalNamespace::__ActiveChallenge__OnCompleted* value);

  constexpr void __cordl_internal_set_onProgressUpdatedCallbacks(::GlobalNamespace::__ActiveChallenge__OnProgressUpdated* value);

  constexpr void __cordl_internal_set_onRedeemedCallbacks(::GlobalNamespace::__ActiveChallenge__OnRedeemed* value);

  constexpr void __cordl_internal_set_trackedStatKey(::StringW value);

  /// @brief Method .ctor, addr 0x2758f90, size 0x198, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ChallengeData challengeData, ::StringW poolKey, int32_t reward, bool hasBeenRedeemed);

  /// @brief Method get_challengeData, addr 0x2758f20, size 0xc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ChallengeData get_challengeData();

  /// @brief Method get_hasBeenRedeemed, addr 0x2758f7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasBeenRedeemed();

  /// @brief Method get_isCompleted, addr 0x2758f68, size 0x8, virtual false, abstract: false, final false
  inline bool get_isCompleted();

  /// @brief Method get_poolKey, addr 0x2758f38, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_poolKey();

  /// @brief Method get_progress, addr 0x2758f58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_progress();

  /// @brief Method get_reward, addr 0x2758f48, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_reward();

  /// @brief Method set_challengeData, addr 0x2758f2c, size 0xc, virtual false, abstract: false, final false
  inline void set_challengeData(::GlobalNamespace::ChallengeData value);

  /// @brief Method set_hasBeenRedeemed, addr 0x2758f84, size 0xc, virtual false, abstract: false, final false
  inline void set_hasBeenRedeemed(bool value);

  /// @brief Method set_isCompleted, addr 0x2758f70, size 0xc, virtual false, abstract: false, final false
  inline void set_isCompleted(bool value);

  /// @brief Method set_poolKey, addr 0x2758f40, size 0x8, virtual false, abstract: false, final false
  inline void set_poolKey(::StringW value);

  /// @brief Method set_progress, addr 0x2758f60, size 0x8, virtual false, abstract: false, final false
  inline void set_progress(int32_t value);

  /// @brief Method set_reward, addr 0x2758f50, size 0x8, virtual false, abstract: false, final false
  inline void set_reward(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActiveChallenge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActiveChallenge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActiveChallenge(ActiveChallenge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActiveChallenge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActiveChallenge(ActiveChallenge const&) = delete;

  /// @brief Field <challengeData>k__BackingField, offset: 0x10, size: 0x20, def value: None
  ::GlobalNamespace::ChallengeData ____challengeData_k__BackingField;

  /// @brief Field <poolKey>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____poolKey_k__BackingField;

  /// @brief Field <reward>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____reward_k__BackingField;

  /// @brief Field <progress>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  int32_t ____progress_k__BackingField;

  /// @brief Field <isCompleted>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____isCompleted_k__BackingField;

  /// @brief Field <hasBeenRedeemed>k__BackingField, offset: 0x41, size: 0x1, def value: None
  bool ____hasBeenRedeemed_k__BackingField;

  /// @brief Field hasRedeemBeenInitiated, offset: 0x42, size: 0x1, def value: None
  bool ___hasRedeemBeenInitiated;

  /// @brief Field trackedStatKey, offset: 0x48, size: 0x8, def value: None
  ::StringW ___trackedStatKey;

  /// @brief Field onProgressUpdatedCallbacks, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__ActiveChallenge__OnProgressUpdated* ___onProgressUpdatedCallbacks;

  /// @brief Field onCompletedCallbacks, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__ActiveChallenge__OnCompleted* ___onCompletedCallbacks;

  /// @brief Field onRedeemedCallbacks, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__ActiveChallenge__OnRedeemed* ___onRedeemedCallbacks;

  /// @brief Field CHALLENGE_COMPLETE_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CHALLENGE_COMPLETE_SOUND_KEY{ u"challengeComplete" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ActiveChallenge, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallenge, ____challengeData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallenge, ____poolKey_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallenge, ____reward_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallenge, ____progress_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallenge, ____isCompleted_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallenge, ____hasBeenRedeemed_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallenge, ___hasRedeemBeenInitiated) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallenge, ___trackedStatKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallenge, ___onProgressUpdatedCallbacks) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallenge, ___onCompletedCallbacks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveChallenge, ___onRedeemedCallbacks) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ActiveChallenge);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ActiveChallenge*, "", "ActiveChallenge");
NEED_NO_BOX(::GlobalNamespace::__ActiveChallenge__OnCompleted);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ActiveChallenge__OnCompleted*, "", "ActiveChallenge/OnCompleted");
NEED_NO_BOX(::GlobalNamespace::__ActiveChallenge__OnProgressUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ActiveChallenge__OnProgressUpdated*, "", "ActiveChallenge/OnProgressUpdated");
NEED_NO_BOX(::GlobalNamespace::__ActiveChallenge__OnRedeemed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ActiveChallenge__OnRedeemed*, "", "ActiveChallenge/OnRedeemed");
