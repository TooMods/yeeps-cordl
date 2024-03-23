#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__BackgroundDispatcher_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BackgroundInvoker)
namespace Amazon::Runtime::Internal::Util {
class __BackgroundInvoker____c;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class BackgroundInvoker;
}
namespace Amazon::Runtime::Internal::Util {
class __BackgroundInvoker____c;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::BackgroundInvoker);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::__BackgroundInvoker____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::BackgroundInvoker::<>c*
class CORDL_TYPE __BackgroundInvoker____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::Internal::Util::__BackgroundInvoker____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0))::System::Action_1<::System::Action*>* __9__0_0;

  static inline ::Amazon::Runtime::Internal::Util::__BackgroundInvoker____c* New_ctor();

  /// @brief Method <.ctor>b__0_0, addr 0x23f4990, size 0x20, virtual false, abstract: false, final false
  inline void __ctor_b__0_0(::System::Action* action);

  /// @brief Method .ctor, addr 0x23f4988, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::Util::__BackgroundInvoker____c* getStaticF___9();

  static inline ::System::Action_1<::System::Action*>* getStaticF___9__0_0();

  static inline void setStaticF___9(::Amazon::Runtime::Internal::Util::__BackgroundInvoker____c* value);

  static inline void setStaticF___9__0_0(::System::Action_1<::System::Action*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BackgroundInvoker____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BackgroundInvoker____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BackgroundInvoker____c(__BackgroundInvoker____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BackgroundInvoker____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BackgroundInvoker____c(__BackgroundInvoker____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__BackgroundInvoker____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::BackgroundInvoker
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 58, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::BackgroundInvoker*
class CORDL_TYPE BackgroundInvoker : public ::Amazon::Runtime::Internal::Util::BackgroundDispatcher_1<::System::Action*> {
public:
  // Declarations
  using __c = ::Amazon::Runtime::Internal::Util::__BackgroundInvoker____c;

  static inline ::Amazon::Runtime::Internal::Util::BackgroundInvoker* New_ctor();

  /// @brief Method .ctor, addr 0x23f482c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundInvoker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackgroundInvoker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackgroundInvoker(BackgroundInvoker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackgroundInvoker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackgroundInvoker(BackgroundInvoker const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::BackgroundInvoker, 0x40>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::BackgroundInvoker);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::BackgroundInvoker*, "Amazon.Runtime.Internal.Util", "BackgroundInvoker");
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::__BackgroundInvoker____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__BackgroundInvoker____c*, "Amazon.Runtime.Internal.Util", "BackgroundInvoker/<>c");
