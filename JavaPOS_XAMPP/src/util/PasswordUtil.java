/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package util;

import java.nio.charset.StandardCharsets;
import java.security.MessageDigest;

public final class PasswordUtil {

    private PasswordUtil() { }

    public static String sha256(String text) {

        try {

            MessageDigest md =
                MessageDigest.getInstance("SHA-256");

            byte[] bytes = md.digest(
                text.getBytes(StandardCharsets.UTF_8)
            );

            StringBuilder sb = new StringBuilder();

            for (byte b : bytes) {

                sb.append(String.format("%02x", b));

            }

            return sb.toString();

        } catch (Exception ex) {

            throw new IllegalStateException(ex);

        }
    }
}
