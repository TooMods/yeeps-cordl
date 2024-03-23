#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ToxModProximityChatManager)
namespace GlobalNamespace {
class ToxModInstance;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ToxModProximityChatManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ToxModProximityChatManager);
// Type: ::ToxModProximityChatManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ToxModProximityChatManager*
class CORDL_TYPE ToxModProximityChatManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field s_activePlayerName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_activePlayerName, put = setStaticF_s_activePlayerName))::StringW s_activePlayerName;

  /// @brief Field s_exposureUpdateIntervalSeconds, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_exposureUpdateIntervalSeconds, put = setStaticF_s_exposureUpdateIntervalSeconds)) float_t s_exposureUpdateIntervalSeconds;

  /// @brief Field s_inst, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_inst, put = setStaticF_s_inst))::GlobalNamespace::ToxModInstance* s_inst;

  /// @brief Field s_lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_lock, put = setStaticF_s_lock))::System::Object* s_lock;

  /// @brief Field s_playerPositions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_playerPositions, put = setStaticF_s_playerPositions))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Vector3>* s_playerPositions;

  /// @brief Field s_radius, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_radius, put = setStaticF_s_radius)) float_t s_radius;

  /// @brief Field s_secondsSinceLastUpdate, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_secondsSinceLastUpdate, put = setStaticF_s_secondsSinceLastUpdate)) float_t s_secondsSinceLastUpdate;

  /// @brief Method AttachInstance, addr 0x28df6a0, size 0x11c, virtual false, abstract: false, final false
  static inline void AttachInstance(::GlobalNamespace::ToxModInstance* instance, ::StringW playerName);

  /// @brief Method Awake, addr 0x28df7bc, size 0x4c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetCanHearPlayerList, addr 0x28df148, size 0x558, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetCanHearPlayerList(::StringW name);

  static inline ::GlobalNamespace::ToxModProximityChatManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x28df950, size 0x4c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RemovePlayer, addr 0x28ded20, size 0x198, virtual false, abstract: false, final false
  static inline void RemovePlayer(::StringW playerName);

  /// @brief Method Reset, addr 0x28df808, size 0x148, virtual false, abstract: false, final false
  static inline void Reset();

  /// @brief Method SetPlayerPosition, addr 0x28deb68, size 0x160, virtual false, abstract: false, final false
  static inline void SetPlayerPosition(::StringW name, ::UnityEngine::Vector3 position);

  /// @brief Method SetRadius, addr 0x28deec8, size 0x13c, virtual false, abstract: false, final false
  static inline void SetRadius(float_t newRadius);

  /// @brief Method Update, addr 0x28df004, size 0x144, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method .ctor, addr 0x28df99c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_s_activePlayerName();

  static inline float_t getStaticF_s_exposureUpdateIntervalSeconds();

  static inline ::GlobalNamespace::ToxModInstance* getStaticF_s_inst();

  static inline ::System::Object* getStaticF_s_lock();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Vector3>* getStaticF_s_playerPositions();

  static inline float_t getStaticF_s_radius();

  static inline float_t getStaticF_s_secondsSinceLastUpdate();

  static inline void setStaticF_s_activePlayerName(::StringW value);

  static inline void setStaticF_s_exposureUpdateIntervalSeconds(float_t value);

  static inline void setStaticF_s_inst(::GlobalNamespace::ToxModInstance* value);

  static inline void setStaticF_s_lock(::System::Object* value);

  static inline void setStaticF_s_playerPositions(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Vector3>* value);

  static inline void setStaticF_s_radius(float_t value);

  static inline void setStaticF_s_secondsSinceLastUpdate(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToxModProximityChatManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToxModProximityChatManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToxModProximityChatManager(ToxModProximityChatManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToxModProximityChatManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToxModProximityChatManager(ToxModProximityChatManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ToxModProximityChatManager, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ToxModProximityChatManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ToxModProximityChatManager*, "", "ToxModProximityChatManager");
