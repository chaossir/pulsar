/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <pulsar/c/client_configuration.h>

#include "c_structs.h"

pulsar_client_configuration_t *pulsar_client_configuration_create() {
    pulsar_client_configuration_t *c_conf = new pulsar_client_configuration_t;
    c_conf->conf = pulsar::ClientConfiguration();
    return c_conf;
}

void pulsar_client_configuration_free(pulsar_client_configuration_t *conf) { delete conf; }

void pulsar_client_configuration_set_auth(pulsar_client_configuration_t *conf,
                                          pulsar_authentication_t *authentication) {
    conf->conf.setAuth(authentication->auth);
}

void pulsar_client_configuration_set_operation_timeout_seconds(pulsar_client_configuration_t *conf,
                                                               int timeout) {
    conf->conf.setOperationTimeoutSeconds(timeout);
}

int pulsar_client_configuration_get_operation_timeout_seconds(pulsar_client_configuration_t *conf) {
    return conf->conf.getOperationTimeoutSeconds();
}

void pulsar_client_configuration_set_io_threads(pulsar_client_configuration_t *conf, int threads) {
    conf->conf.setIOThreads(threads);
}

int pulsar_client_configuration_get_io_threads(pulsar_client_configuration_t *conf) {
    return conf->conf.getIOThreads();
}

void pulsar_client_configuration_set_message_listener_threads(pulsar_client_configuration_t *conf,
                                                              int threads) {
    conf->conf.setMessageListenerThreads(threads);
}

int pulsar_client_configuration_get_message_listener_threads(pulsar_client_configuration_t *conf) {
    return conf->conf.getMessageListenerThreads();
}

void pulsar_client_configuration_set_concurrent_lookup_request(pulsar_client_configuration_t *conf,
                                                               int concurrentLookupRequest) {
    conf->conf.setConcurrentLookupRequest(concurrentLookupRequest);
}

int pulsar_client_configuration_get_concurrent_lookup_request(pulsar_client_configuration_t *conf) {
    return conf->conf.getConcurrentLookupRequest();
}

void pulsar_client_configuration_set_log_conf_file_path(pulsar_client_configuration_t *conf,
                                                        const char *logConfFilePath) {
    conf->conf.setLogConfFilePath(logConfFilePath);
}

const char *pulsar_client_configuration_get_log_conf_file_path(pulsar_client_configuration_t *conf) {
    return conf->conf.getLogConfFilePath().c_str();
}

void pulsar_client_configuration_set_use_tls(pulsar_client_configuration_t *conf, int useTls) {
    conf->conf.setUseTls(useTls);
}

int pulsar_client_configuration_is_use_tls(pulsar_client_configuration_t *conf) {
    return conf->conf.isUseTls();
}

void pulsar_client_configuration_set_tls_trust_certs_file_path(pulsar_client_configuration_t *conf,
                                                               const char *tlsTrustCertsFilePath) {
    conf->conf.setTlsTrustCertsFilePath(tlsTrustCertsFilePath);
}

const char *pulsar_client_configuration_get_tls_trust_certs_file_path(pulsar_client_configuration_t *conf) {
    return conf->conf.getTlsTrustCertsFilePath().c_str();
}

void pulsar_client_configuration_set_tls_allow_insecure_connection(pulsar_client_configuration_t *conf,
                                                                   int allowInsecure) {
    conf->conf.setTlsAllowInsecureConnection(allowInsecure);
}

int pulsar_client_configuration_is_tls_allow_insecure_connection(pulsar_client_configuration_t *conf) {
    return conf->conf.isTlsAllowInsecureConnection();
}

void pulsar_client_configuration_set_stats_interval_in_seconds(pulsar_client_configuration_t *conf,
                                                               const unsigned int interval) {
    conf->conf.setStatsIntervalInSeconds(interval);
}

const unsigned int pulsar_client_configuration_get_stats_interval_in_seconds(
    pulsar_client_configuration_t *conf) {
    return conf->conf.getStatsIntervalInSeconds();
}