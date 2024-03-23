#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IChannel)
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Wire::Internal {
struct SubscriptionState;
}
// Forward declare root types
namespace Unity::Services::Wire::Internal {
class IChannel;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Wire::Internal::IChannel);
// Type: Unity.Services.Wire.Internal::IChannel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Wire::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Wire.Internal::IChannel*
class CORDL_TYPE IChannel {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method SubscribeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SubscribeAsync();

  /// @brief Method UnsubscribeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* UnsubscribeAsync();

  /// @brief Method add_BinaryMessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_BinaryMessageReceived(::System::Action_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  /// @brief Method add_ErrorReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_ErrorReceived(::System::Action_1<::StringW>* value);

  /// @brief Method add_KickReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_KickReceived(::System::Action* value);

  /// @brief Method add_MessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_MessageReceived(::System::Action_1<::StringW>* value);

  /// @brief Method add_NewStateReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_NewStateReceived(::System::Action_1<::Unity::Services::Wire::Internal::SubscriptionState>* value);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_BinaryMessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_BinaryMessageReceived(::System::Action_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  /// @brief Method remove_ErrorReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_ErrorReceived(::System::Action_1<::StringW>* value);

  /// @brief Method remove_KickReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_KickReceived(::System::Action* value);

  /// @brief Method remove_MessageReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_MessageReceived(::System::Action_1<::StringW>* value);

  /// @brief Method remove_NewStateReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_NewStateReceived(::System::Action_1<::Unity::Services::Wire::Internal::SubscriptionState>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IChannel(IChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IChannel(IChannel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Wire::Internal
NEED_NO_BOX(::Unity::Services::Wire::Internal::IChannel);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Wire::Internal::IChannel*, "Unity.Services.Wire.Internal", "IChannel");
