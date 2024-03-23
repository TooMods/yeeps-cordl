#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JitteredDelay)
namespace System {
class Random;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Amazon::Util {
class JitteredDelay;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::JitteredDelay);
// Type: Amazon.Util::JitteredDelay
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::JitteredDelay*
class CORDL_TYPE JitteredDelay : public ::System::Object {
public:
  // Declarations
  /// @brief Field _baseIncrement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__baseIncrement, put = __cordl_internal_set__baseIncrement))::System::TimeSpan _baseIncrement;

  /// @brief Field _count, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _maxDelay, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__maxDelay, put = __cordl_internal_set__maxDelay))::System::TimeSpan _maxDelay;

  /// @brief Field _rand, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rand, put = __cordl_internal_set__rand))::System::Random* _rand;

  /// @brief Field _variance, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__variance, put = __cordl_internal_set__variance))::System::TimeSpan _variance;

  /// @brief Method GetRetryDelay, addr 0x2205278, size 0xc8, virtual false, abstract: false, final false
  inline ::System::TimeSpan GetRetryDelay(int32_t attemptCount);

  static inline ::Amazon::Util::JitteredDelay* New_ctor(::System::TimeSpan baseIncrement, ::System::TimeSpan variance);

  static inline ::Amazon::Util::JitteredDelay* New_ctor(::System::TimeSpan baseIncrement, ::System::TimeSpan variance, ::System::TimeSpan maxDelay);

  /// @brief Method Next, addr 0x2205340, size 0x3c, virtual false, abstract: false, final false
  inline ::System::TimeSpan Next();

  /// @brief Method Reset, addr 0x220537c, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::TimeSpan const& __cordl_internal_get__baseIncrement() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__baseIncrement();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr ::System::TimeSpan const& __cordl_internal_get__maxDelay() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__maxDelay();

  constexpr ::System::Random*& __cordl_internal_get__rand();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __cordl_internal_get__rand() const;

  constexpr ::System::TimeSpan const& __cordl_internal_get__variance() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__variance();

  constexpr void __cordl_internal_set__baseIncrement(::System::TimeSpan value);

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__maxDelay(::System::TimeSpan value);

  constexpr void __cordl_internal_set__rand(::System::Random* value);

  constexpr void __cordl_internal_set__variance(::System::TimeSpan value);

  /// @brief Method .ctor, addr 0x2205190, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::TimeSpan baseIncrement, ::System::TimeSpan variance);

  /// @brief Method .ctor, addr 0x22051e8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::TimeSpan baseIncrement, ::System::TimeSpan variance, ::System::TimeSpan maxDelay);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JitteredDelay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JitteredDelay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JitteredDelay(JitteredDelay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JitteredDelay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JitteredDelay(JitteredDelay const&) = delete;

  /// @brief Field _maxDelay, offset: 0x10, size: 0x8, def value: None
  ::System::TimeSpan ____maxDelay;

  /// @brief Field _variance, offset: 0x18, size: 0x8, def value: None
  ::System::TimeSpan ____variance;

  /// @brief Field _baseIncrement, offset: 0x20, size: 0x8, def value: None
  ::System::TimeSpan ____baseIncrement;

  /// @brief Field _rand, offset: 0x28, size: 0x8, def value: None
  ::System::Random* ____rand;

  /// @brief Field _count, offset: 0x30, size: 0x4, def value: None
  int32_t ____count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::JitteredDelay, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::JitteredDelay, ____maxDelay) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::JitteredDelay, ____variance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::JitteredDelay, ____baseIncrement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::JitteredDelay, ____rand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::JitteredDelay, ____count) == 0x30, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::JitteredDelay);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::JitteredDelay*, "Amazon.Util", "JitteredDelay");
