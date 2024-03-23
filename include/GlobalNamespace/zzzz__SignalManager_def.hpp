#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SignalManager)
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
struct SignalChannel;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SignalManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SignalManager);
// Type: ::SignalManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SignalManager*
class CORDL_TYPE SignalManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::SignalManager>> {
public:
  // Declarations
  /// @brief Field signalReceivers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_signalReceivers, put = __cordl_internal_set_signalReceivers))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::SignalChannel, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>* signalReceivers;

  /// @brief Method DeregisterSignalReceiver, addr 0x307d1f4, size 0xc4, virtual false, abstract: false, final false
  inline void DeregisterSignalReceiver(::GlobalNamespace::MapObject* mapObject, ::GlobalNamespace::SignalChannel signalChannel);

  static inline ::GlobalNamespace::SignalManager* New_ctor();

  /// @brief Method RegisterSignalReceiver, addr 0x307b230, size 0x178, virtual false, abstract: false, final false
  inline void RegisterSignalReceiver(::GlobalNamespace::MapObject* mapObject, ::GlobalNamespace::SignalChannel signalChannel);

  /// @brief Method TriggerSignalChannel, addr 0x30859a8, size 0x240, virtual false, abstract: false, final false
  inline void TriggerSignalChannel(::GlobalNamespace::SignalChannel signalChannel, ::StringW payload);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SignalChannel, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>*&
  __cordl_internal_get_signalReceivers();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SignalChannel, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>*> const&
  __cordl_internal_get_signalReceivers() const;

  constexpr void __cordl_internal_set_signalReceivers(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SignalChannel, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>* value);

  /// @brief Method .ctor, addr 0x3085be8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalManager(SignalManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalManager(SignalManager const&) = delete;

  /// @brief Field signalReceivers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SignalChannel, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MapObject>>*>* ___signalReceivers;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Signals: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SignalManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SignalManager, ___signalReceivers) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SignalManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalManager*, "", "SignalManager");
